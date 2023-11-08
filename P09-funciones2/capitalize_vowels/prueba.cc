#include <iostream>
#include <string>

void EnterAndReadString(std::string& cadena);
std::string CapitalizeVowels(const std::string& cadena);

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

int main () {
  std::string cadena {""};
  EnterAndReadString(cadena);
  std::string new_cadena = CapitalizeVowels(cadena);
  std::cout << "La cadena con las vocales y consonates cambiados es: " << new_cadena << std::endl;
  return 0;
}

void EnterAndReadString(std::string& cadena) {
  std::cout << "Introduzca una cadena: ";
  std::cin >> cadena;
  std::cout << "La cadena introducida es: " << cadena << std::endl;
}
