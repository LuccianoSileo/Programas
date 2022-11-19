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

#include <iomanip>
#include <iostream>

long double suma_harmonica(int interaciones) {
  long double resultado{0};
  int i{1};
  while (i <= interaciones) {
    resultado += (1.0 / static_cast<float>(i));
    ++i;
  }
  return resultado;
}

int main() {
  int a;
  std::cin >> a;

  std::cout << std::fixed << std::setprecision(4) << suma_harmonica(a)
            << std::endl;

  return 0;
}