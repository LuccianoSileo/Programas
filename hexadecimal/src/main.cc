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

#include "tools.h"

int main() {
  int a{0};
  std::string resultado;
  std::cin >> a;
  if (a == 0) {
    std::cout << 0 << std::endl;
  } else {
    resultado = dec_to_hexa(a);
    reverseStr(resultado);
    std::cout << resultado << std::endl;
  }
  return 0;
}