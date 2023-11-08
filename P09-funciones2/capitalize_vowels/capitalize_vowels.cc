/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 11/07/2023
 * @brief este programa se encarga la mayusculas y minusculas de una cadena
 * @see https://google.github.io/styleguide/cppguide.html
 *
 */
#include "capitalize_vowels.h"

void EnterAndReadString(std::string& cadena) {
  std::cout << "Introduzca una cadena: ";
  std::cin >> cadena;
}

std::string CapitalizeVowels(const std::string& cadena) {
  std::string new_cadena {""};
  for(int i {0}; i < cadena.length(); ++i) {
    if(tolower(cadena.at(i)) == 'a' || tolower(cadena.at(i)) == 'e' || tolower(cadena.at(i)) == 'i' || tolower(cadena.at(i)) == 'o' || tolower(cadena.at(i)) == 'u') {
      new_cadena.push_back(toupper(cadena.at(i)));
    } else {
      new_cadena.push_back(tolower(cadena.at(i)));
    }
  }
  return new_cadena;
}