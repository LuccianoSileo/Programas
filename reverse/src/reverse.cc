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

void reverseStr(std::string& str) {
  int n = str.length();

  for (int i = 0; i < n / 2; ++i) {
    std::swap(str[i], str[n - i - 1]);
  }
}

int main() {
  std::string a;
  std::cin >> a;
  reverseStr(a);
  std::cout << a << std::endl;
  return 0;
}