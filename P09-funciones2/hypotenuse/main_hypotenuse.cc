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

int main() {
  double cateto1 {0.f}, cateto2 {0.f};
  EnterCateto(cateto1, cateto2);
  ReadHypotenuse(cateto1, cateto2);
  return 0;
}