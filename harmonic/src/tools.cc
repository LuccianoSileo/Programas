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

long double suma_harmonica(int interaciones) {
  long double resultado{0};
  int i{1};
  while (i <= interaciones) {
    resultado += (1.0 / i);
    ++i;
  }
  return resultado;
}