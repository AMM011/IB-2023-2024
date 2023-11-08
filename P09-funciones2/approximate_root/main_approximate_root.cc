/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 11/07/2023
 * @brief este programa resuelve diferentes calculos
 * @see https://google.github.io/styleguide/cppguide.html
 *
 */

#include "approximate_root.h"

int main () {
  double number {0.f};
  EnterNumber(number);
  MayorThatZero(number);
  double root {0.f}, delta {0.f};
  RootDelta(root, delta);
  std::cout << "Root tiene un nuevo valor de: " << Operation(root ,delta ,number) << std::endl;
  return 0;
}