/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 11/07/2023
 * @brief este programa se encarga de realizar un calculo con los polinomios dandos
 * @see https://google.github.io/styleguide/cppguide.html
 *
 */

#include "polynomial.h"

int main () {
  std::vector<int> polinomio1 {};
  int value {0};
  polinomio1.reserve(100);
  EnterPolynomial(polinomio1);
  ReadPolynomial(polinomio1);
  std::cout << "Introduce un value: ";
  std::cin >> value;
  std::cout << "El resultado del polinomio es: " << PolynomialValue(polinomio1, value) << std::endl;
  return 0;
}