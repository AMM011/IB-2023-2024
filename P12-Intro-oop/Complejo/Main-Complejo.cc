/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 12/12/2023
 * @brief Este programa crea un objeto de la clase Complejo y realiza operaciones con él
 * @see https://google.github.io/styleguide/cppguide.html
 * 
 */
#include "Complejo.h"

int main () {
  Complejo complejo1({0, 0});
  Complejo complejo2({0, 0});
  std::cout << "Introduzca el primer número complejo: \n";
  std::cin >> complejo1;
  std::cout << "El primer número complejo es: ";
  std::cout  << complejo1;
  std::cout << "Introduzca el segundo número complejo: \n";
  std::cin >> complejo2;
  std::cout << "El segundo número complejo es: ";
  std::cout  << complejo2;

  Complejo resultado ({0, 0});
  std::cout << "La suma de los complejos es: ";
  resultado = complejo1 + complejo2;
  resultado = complejo1 + complejo2;
  std::cout << resultado;
  std::cout << "La resta de los complejos es: ";
  resultado = complejo1 - complejo2;
  std::cout << resultado;

  // Modifiers
  resultado = complejo1 * complejo2;
  std::cout << "La multiplicación de los complejos es: ";
  std::cout << resultado;
  resultado = complejo1 / complejo2;
  std::cout << "La división de los complejos es: ";
  std::cout << resultado;
  // Modifiers Methods
  std::cout << "El conjugado del complejo 1 es: ";
  complejo1.Conjugado();
  std::cout << "El valor absoluto del complejo 1 es: ";
  complejo1.ValorAbsoluto();
  std::cout << "El expoencial del complejo 1 es: ";
  complejo1.Exponente();
  return 0;
}