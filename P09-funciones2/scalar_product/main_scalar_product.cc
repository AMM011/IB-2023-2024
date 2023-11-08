/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica
 *
 * @author Alfredo
 * @date 11/07/2023
 * @brief este programa se encarga de realizar calculo de producto escalar
 * @see https://google.github.io/styleguide/cppguide.html
 *
 */

#include "scalar_product.h"

int main() {
  std::vector<int> v1 = {};
  v1.reserve(100);
  std::vector<int> v2 = {};
  v2.reserve(100);
  std::cout << "Indruce numeros al vector 1, y si quiere dejar de introducir, introduzca un -1: " << std::endl;
  AddNumers(v1);
  std::cout << "Indruce numeros al vector 2, y si quiere dejar de introducir, introduzca un -1: " << std::endl;
  AddNumers(v2);
  std::cout << "El producto escalar de los vectores v1 ";
  ReadVector(v1);
  std::cout << " y v2 ";
  ReadVector(v2);
  std::cout << " es: " << ScalarProduct(v1, v2) << std::endl;
  return 0;
}