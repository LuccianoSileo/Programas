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

#include <bits/stdc++.h>

#include <iostream>
#include <string>

#include "tools.h"

int main() {
  int a{0};
  std::string respuesta;
  std::cin >> a;
  respuesta = toBinary(a);
  reverseStr(respuesta);
  std::cout << respuesta << std::endl;
  return 0;
}