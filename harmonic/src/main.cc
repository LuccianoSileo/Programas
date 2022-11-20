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

#include "tools.h"

int main() {
  int a;
  std::cin >> a;
  std::cout << std::fixed << std::setprecision(4) << suma_harmonica(a)
            << std::endl;
  return 0;
}