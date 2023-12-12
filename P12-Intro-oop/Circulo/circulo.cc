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

void Circulo::Print() const {
  std::cout << "El círculo tiene un radio de " << GetRadio() << " y un centro en (" << GetCentro().x << ", " << GetCentro().y << ")." << std::endl;
  std::cout << "El color del círculo es: ";
  switch (GetColor()) {
    case ROJO:
      std::cout << "rojo" << std::endl;
      break;
    case VERDE:
      std::cout << "verde" << std::endl;
      break;
    case AZUL:
      std::cout << "azul" << std::endl;
      break;
    case AMARILLO:
      std::cout << "amarillo" << std::endl;
      break;
  }
}

void Circulo::EsInterior(Punto punto) const {
  double distance = sqrt(pow(punto.x - GetCentro().x, 2) + pow(punto.y - GetCentro().y, 2));
  if (distance < GetRadio()) {
    std::cout << "El punto dado está dentro del círculo\n";
  } else if (distance == GetRadio()) {
    std::cout << "El punto dado está exactamente en el borde del círculo\n";
  } else {
    std::cout << "El punto dado está fuera del círculo\n";
  }
}