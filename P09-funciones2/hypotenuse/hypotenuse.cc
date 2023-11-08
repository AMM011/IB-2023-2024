/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 11/07/2023
 * @brief este programa se encarga calcular la hipotesuna de un triangulo rectángulo
 * @see https://google.github.io/styleguide/cppguide.html
 *
 */

#include "hypotenuse.h"

void EnterCateto(double& cateto1, double& cateto2) {
  std::cout << "Introduce el cateto 1: ";
  std::cin >> cateto1;
  std::cout << "Introduce el cateto 2: ";
  std::cin >> cateto2;
}

double Hypotenuse(const double& cateto1, const double& cateto2) {
  double result {0.f};
  result = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
  return result;
}

void ReadHypotenuse(const double& cateto1, const double& cateto2) {
  std::cout << "La hipotenusa del triangulo rectangulo es: ";
  std::cout << std::fixed << std::setprecision(4) << Hypotenuse(cateto1, cateto2) << std::endl;
}