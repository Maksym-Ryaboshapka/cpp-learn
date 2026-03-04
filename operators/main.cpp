#include <iostream>

int main() {
    // Операторы
    // Унарные
    // Бинарные
    // Тернарные

    // Унарные
    // int a = 5;
    // std::cout << a << std::endl;
    //
    // a = -a;
    // std::cout << a << std::endl;

    // Бинарные
    // int a = 5, b = 2, c;
    //
    // c = a + b;
    // std::cout << c << std::endl;

    int num1, num2;

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "Сумма = " << num1 + num2 << std::endl;
    std::cout << "Произведение = " << num1 * num2 << std::endl;
    std::cout << "Среднее арифметическое = " << (num1 + num2) / 2 << std::endl;

    return 0;
}
