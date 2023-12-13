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

// Modifiers
Complejo Complejo::operator*(const Complejo& number) const {
  composicion comMulti = {number_.real * number.number_.real - (number_.imaginario * number.number_.imaginario), number_.imaginario * number.number_.real + (number_.real * number.number_.imaginario)};
  Complejo resultado{comMulti};
  return resultado;
}

Complejo Complejo::operator/(const Complejo& number) const {
  composicion comDivi = {(number_.real * number.number_.real + (number_.imaginario * number.number_.imaginario)) / (pow(number.number_.real, 2) + pow(number.number_.imaginario, 2)), (number_.imaginario * number.number_.real - number_.real * number.number_.imaginario) / (pow(number.number_.real, 2) + pow(number.number_.imaginario, 2))};
  Complejo resultado {comDivi};
  return resultado;
}


void Complejo::Conjugado() const {
  double conjugado = -number_.imaginario;
  if(conjugado < 0) {
    std::cout << number_.real << " " << conjugado << "i" << std::endl;
  } else {
    std::cout << number_.real << " + " << conjugado << "i" << std::endl;
  }
}

void Complejo::ValorAbsoluto () const {
  std::cout << sqrt(pow(number_.real, 2) + pow(number_.imaginario, 2)) << std::endl;;
}

void Complejo::Exponente() const {
  double modulo = sqrt(pow(number_.real, 2) + pow(number_.imaginario, 2));
  double angulo = atan2(number_.imaginario, number_.real);

  std::cout << modulo << "e^(" << angulo << "i)" << std::endl;
}