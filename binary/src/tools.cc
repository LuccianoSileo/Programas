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

std::string decimal_to_binary(int number) {
  int n_bin = number % 2;
  std::string resultado = std::to_string(n_bin);
  number /= 2;

  while (number > 0) {
    n_bin = n_bin * 10 + number % 2;
    resultado += std::to_string(n_bin);
    number /= 2;
  }
  return resultado;
}

int reverse(int number) {
  int residual{0};
  int n_reverse{0};
  while (number > 0) {
    residual = number % 10;
    n_reverse = n_reverse * 10 + residual;
    number /= 10;
  }
  return n_reverse;
}

void reverseStr(std::string& str) {
  int n = str.length();

  for (int i = 0; i < n / 2; ++i) {
    std::swap(str[i], str[n - i - 1]);
  }
}

std::string toBinary(int number) {
  std::string resultado;
  while (number != 0) {
    resultado = (number % 2 == 0 ? "0" : "1") + resultado;
    number /= 2;
  }
  return resultado;
}