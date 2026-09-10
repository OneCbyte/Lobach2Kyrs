#include <iostream>
#include "triangle.h"

int main()
{
    setlocale(LC_ALL, "RUS");
    int a, h;
    Triangle triangle;
    std::cout << "Введите сторону треугольника: ";
    std::cin >> a;
    triangle.set_a(a);
    std::cout << "Введите высоту треугольника: ";
    std::cin >> h;
    triangle.set_a(h);\
    std::cout << "Площадь треугольника равна - " << triangle.get_S();
    return 0;
}