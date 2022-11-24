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

int EjeY(const std::string& cadena) {
  int eje_y{0};
  for (int i = 0; i <= cadena.length(); ++i) {
    if (cadena[i] == 'n') {
      --eje_y;
    } else if (cadena[i] == 's') {
      ++eje_y;
    }
  }
  return eje_y;
}

int EjeX(const std::string& cadena) {
  int eje_x{0};
  for (int i = 0; i <= cadena.length(); ++i) {
    if (cadena[i] == 'e') {
      ++eje_x;
    } else if (cadena[i] == 'w') {
      --eje_x;
    }
  }
  return eje_x;
}

int main() {
  std::string cadena{""};
  std::cin >> cadena;
  std::cout << '(' << EjeX(cadena) << ", " << EjeY(cadena) << ")\n";
  return 0;
}