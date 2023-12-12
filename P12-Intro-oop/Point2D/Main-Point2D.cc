/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 09/12/2023
 * @brief Este programa representa puntos en el espacio bidimensional a través de sus coordenadas
 * @see https://google.github.io/styleguide/cppguide.html
 * 
 */

#include "Point2d.h"

int main() {
  Point2D Coordenas1 (0,0);
  std::cout << "Introduce las coordenadas del punto 1, x e y: " << std::endl;
  std::cin >> Coordenas1;
  std::cout << "La coordenadas del punto 1 son ";
  Coordenas1.Show();
//   Coordenas1.Move();

  Point2D Coordenas2 (0,0);
  std::cout << "Introduce la coordenada del punto 2, x e y: " << std::endl;
  std::cin >> Coordenas2;
  std::cout << "La coordenadas del punto 2 son ";
  Coordenas2.Show();
//   Coordenas2.Move();

  Coordenas1.Distance(Coordenas2);
  Coordenas1.Middle(Coordenas2);

  return 0;
}