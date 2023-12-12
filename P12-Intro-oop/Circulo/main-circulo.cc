/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 09/12/2023
 * @brief Este programa resuelve difentes operaciones con circulos
 * @see https://google.github.io/styleguide/cppguide.html
 * 
 */
#include "circulo.h"

int main () {
  Circulo circulo1({0, 0}, 5, ROJO);
  Circulo circulo2({1, 1}, 3, VERDE);

  std::cout << "El área del círculo 1 es: " << circulo1.CalcularArea() << std::endl;
  std::cout << "El área del círculo 2 es: " << circulo2.CalcularArea() << std::endl;
  std::cout << "El perímetro del círculo 1 es: " << circulo1.CalcularPerimtro() << std::endl;
  std::cout << "El perímetro del círculo 2 es: " << circulo2.CalcularPerimtro() << std::endl;
  circulo1.Print();
  circulo2.Print();

  Punto punto1 = {0, 0};
  Punto punto2 = {1, 1};
  std::cout << "Introduzca las coordenadas del primer punto: ";
  std::cin >> punto1.x >> punto1.y;
  circulo1.EsInterior(punto1); 
  std::cout << "Introduzca las coordenadas del segundo punto: ";
  std::cin >> punto2.x >> punto2.y;
  circulo2.EsInterior(punto2);
  return 0;
}