/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 19/11/2023
 * @brief Este programa se encarga de leer un fichero de texto y separar las vocales y consonantes en dos ficheros diferentes.
 * @see https://google.github.io/styleguide/cppguide.html
 * 
 */

#include "vowels-and-consonants.h"

void Usage(int argc, char *argv[]) {
  if (argc < 2) {
    std::cerr << "Uso: " << argv[0] << " <nombre_del_fichero>\n";
    return;
  }
}

// Crea un fichero
void CreateFile(const std::string& file_name) {
  std::ofstream archivo;
  archivo.open(file_name.c_str()); // Crea el fichero si no existe
  if(archivo.fail()) {
    std::cerr << "Error al abrir el fichero" << std::endl;
    return;
  }
  std::cout << "El nombre del archivo es: " << file_name << std::endl;
  archivo.close();
}

// Añade texto al fichero
void AddText(const std::string& file_name) {
  std::ofstream archivo;
  archivo.open(file_name.c_str(), std::ios::app); // Añade texto al final del fichero

  if(archivo.fail()) {
    std::cerr << "Error al abrir el fichero" << std::endl;
    return;
  }
  
  std::string text {""};
  std::cout << "Escriba el texto que desea añadir al fichero.\n";
  std::cout <<"Cuando quiera finalizar, escriba 'fin' en una nueva línea.\n";
  
  // Añade texto al fichero hasta que el usuario escriba "fin"
  while (text != "fin") {
    getline(std::cin, text);
    if (text != "fin") {
      archivo << text << std::endl;
    }
  }
  archivo.close();
}

// Función que cuenta las vocales y consonantes de un fichero
void VowelsAndConsonantCounter(const std::string& file_name) {
  std::ifstream archivo; //  Se puede abrir el fichero desde aqui 
  archivo.open(file_name.c_str(), std::ios::in);
  if(archivo.fail()) {
    std::cerr << "Error al abrir el fichero" << std::endl;
    return;
  }

  std::string word;
  std::string consonant;
  std::string vowels;
  int new_vowels {0};
  int old_vowels {0};
  int new_consonants {0};
  int old_consonants {0};

  while(archivo >> word) {
    new_vowels = 0;
    new_consonants = 0;
    bool has_number = false;

    for (char c : word) {  // Recorre la palabra
      if (isdigit(c)) {
        has_number = true;
        break;
      }
      if (isalpha(c)) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
          ++new_vowels;
        } else {
          ++new_consonants;
        }
      }
    }

    if (!has_number) { // Si la palabra no tiene números
      if (new_vowels > old_vowels) { // Mira si tiene más vocales que la anterior
        old_vowels = new_vowels;
        vowels = word;
      }
      if (new_consonants > old_consonants) {  // Mira si tiene más consonantes que la anterior
        old_consonants = new_consonants;
        consonant = word;
      }
    }
  }
  archivo.close();
  std::cout << "La palabra con mayor número de vocales es: " << vowels << std::endl;
  std::cout << "La palabra con mayor número de consonantes es: " << consonant << std::endl;
}

// void CreateFile(const std::string& file_name) {
//   std::ifstream file(file_name);
//   std::ofstream vowels_file("vowels.txt");
//   std::ofstream consonants_file("consonants.txt");
//   char character;
//   while (file.get(character)) {
//     if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
//       vowels_file << character;
//     } else if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
//       consonants_file << character;
//     }
//   }
//   file.close();
//   vowels_file.close();
//   consonants_file.close();
// }