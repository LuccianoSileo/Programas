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

int main(int argc, char* argv[]) {
  std::cout << '(' << EjeX(argv[1]) << ", " << EjeY(argv[1]) << ")\n";
  return 0;
}