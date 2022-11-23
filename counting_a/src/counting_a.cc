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

int Counting_As(std::string cadena) {
  unsigned int num_of_a{0};
  for (int i = 0; i <= cadena.length(); ++i) {
    if (cadena[i] == 'a') {
      ++num_of_a;
    }
  }
  return num_of_a;
}

int main() {
  std::string input;
  std::getline(std::cin, input);
  std::cout << Counting_As(input) << std::endl;
}
