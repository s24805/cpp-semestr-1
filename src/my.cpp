#include <iostream>


auto iloczyn(int a, int b, int c) -> int
{
    return a * b * c;
}

auto main() -> int
{
    int a, b, c;
    std::cout << "Podaj liczbe: ";
    std::cin >> a;

    b = 1;
    c = 2;

    std::cout << "Wynik: " << iloczyn(a, b, c);
}
