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

std::istream& operator>>(std::istream& is, Complejo& number) {
  is >> number.number_.real;
  is >> number.number_.imaginario;
  return is;
}

std::ostream& operator<<(std::ostream& os, const Complejo& number) {
  if(number.number_.imaginario < 0) {
    os << number.number_.real << " - " << -number.number_.imaginario << "i" << std::endl;
  } else {
    os << number.number_.real << " + " << number.number_.imaginario << "i" << std::endl;
  }
  return os;
}

Complejo Complejo::operator+(const Complejo& number) const {
  composicion compSuma = {number_.real + number.number_.real, number_.imaginario + number.number_.imaginario};
  Complejo resultado(compSuma);
  return resultado;
}

Complejo Complejo::operator-(const Complejo& number) const {
  composicion compResta = {number_.real - number.number_.real, number_.imaginario - number.number_.imaginario};
  Complejo resultado(compResta);
  return resultado;
}