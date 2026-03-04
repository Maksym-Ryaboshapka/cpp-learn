#include <iostream>

int main() {
  // === числовые типы ===
  // целочисленные

  // int - 4 байта
  // short - 2 байта
  // long - 4 байта

  // с плавающей точкой

  // float - 4 байта
  // double - 8 байт

  // === символьные ===

  // char - 1 байт

  // === логические ===

  // bool - 1 байт

  // int a;
  // a = 5;

  int a = 5;
  std::cout << a << std::endl;

  a = 10;
  std::cout << a << std::endl;

  // int age, b, c;
  // age = 15;
  // b = 2;
  // c = 4;

  int age = 15, b = 2, c = 4;

  std::cout << age << " " << b << " " << c << std::endl;

  double d = 1.1551;

  std::cout << d << std::endl;

  char e = 'f';

  std::cout << e << std::endl;

  // bool f = true; // 1
  bool f = false; // 0

  std::cout << f << std::endl;

  return 0;
}
