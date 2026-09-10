#include <iostream>

int main()
{
    setlocale(LC_ALL, "rus");
    int a, h;
    double S;
    std::cout << "Введите сторону треугольника: ";
    std::cin >> a;
    std::cout << "Введите высоту треугольника: ";
    std::cin >> h;
    S = (a * h) / 2.0;
    std::cout << "Площадь треугольника равна - " << S;
    return 0;
}