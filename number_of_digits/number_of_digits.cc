/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica 2022-2023
 *
 * @file
 * @author Lucciano Sileo alu0101501253@ull.edu.es
 * @date Oct 12 2022
 * @brief
 * @bug There are no known bugs
 * @see
 **/

#include <iostream>

int counter(int number) {
  int size = 1;
  for (int i = number; i > 9; i /= 10, ++size)
    ;
  return size;
}

int main() {
  int a;
  std::cin >> a;
  std::cout << "The number of digits of " << a << " is " << counter(a) << ".\n";
  return 0;
}