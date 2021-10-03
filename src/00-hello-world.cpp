/*
 * The very first program you should write in any new programming language.
 */


#include <iostream>
#include <string>

auto zapytaj() -> int
{
    int x;
std::string s = "Podaj liczbe: ";
    std::cout << s;
    std::cin >> x;
    return x;
}

// komentarz changed
auto main() -> int
{
    std::cout << "Hello, AAAA!\n";

    int a, b;

    a = zapytaj();
    b = zapytaj();
    std::cout << "suma: " << a+b << "\n";

    return 0;
}
