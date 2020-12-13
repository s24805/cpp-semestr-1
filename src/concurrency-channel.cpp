#include <chrono>
#include <iostream>
#include <thread>
#include <string>

#include <itp/channel.h>


auto printer(itp::channel<std::string>& ch) -> void
{
    std::cout << "printer is running!\n";

    std::string message = ch.wait();
    while (not message.empty()) {
        std::cout << message << "\n";
        try {
            message = ch.wait_for(std::chrono::seconds{1});
        } catch (itp::timeout_expored_error const&) {
            // timeout expired, ignore
        }
    }

    std::cout << "printer is shutting down!\n";
}

auto main() -> int
{
    auto ch = itp::channel<std::string>{};
    std::thread{printer, std::ref(ch)}.detach();

    {
        auto message = std::string{};
        do {
            std::getline(std::cin, message);
            ch.push(message);
        } while (not message.empty());
    }

    return 0;
}
