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

std::string dec_to_hexa(int number) {
  std::string resultado = "";

  while (number != 0) {
    int remainder{0};
    char character;
    remainder = number % 16;
    if (remainder < 10) {
      character = remainder + 48;
    } else {
      character = remainder + 55;
    }

    resultado += character;
    number /= 16;
  }
  return resultado;
}

void reverseStr(std::string& str) {
  int n = str.length();

  for (int i = 0; i < n / 2; ++i) {
    std::swap(str[i], str[n - i - 1]);
  }
}