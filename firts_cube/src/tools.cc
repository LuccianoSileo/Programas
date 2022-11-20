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

int pow(int base, int exponent) {
  int result{1};
  for (int i = 1; i <= exponent; ++i) {
    result *= base;
  }
  return result;
}

void escala_power(int veces) {
  for (int i = 0; i < veces; ++i) {
    std::cout << pow(i, 3) << ',';
  }
  std::cout << pow(veces, 3) << std::endl;
}
