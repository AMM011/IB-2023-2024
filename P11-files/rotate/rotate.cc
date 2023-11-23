/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 19/11/2023
 * @brief Este programa se encarga de leer un fichero de texto y cambiar ciertas letras por otras.
 * @see https://google.github.io/styleguide/cppguide.html
 * 
 */

#include "rotate.h"

void Usage(int argc, char *argv[]) {
  if (argc < 2) {
    std::cerr << "Uso: " << argv[0] << " <nombre_del_fichero>\n";
    return;
  }
}

void Rotate(const std::string& file_name) {
  std::fstream archivo; // Creamos un "tipo de dato" archivo, tanto para lectura, como para escribir en él.
  archivo.open(file_name, std::ios::in); // Lo abrimos, en este caso para lectura
  if (archivo.fail()) {
    std::cerr << "Error al abrir el fichero\n";
    return;
  }

  std::vector<std::string> lines;
  std::string line;

  // Lee y modifica cada línea
  while (std::getline(archivo, line)) {
    for (char& c : line) { // Realiza un cambio en line, si se llega a cambiar c, esto gracias a &(es una referencia)
      switch (c) {
        case 'a': 
          c = 'e'; 
          break;
        case 'e': 
          c = 'i'; 
          break;
        case 'i': 
          c = 'o'; 
          break;
        case 'o': 
          c = 'u'; 
          break;
        case 'u': 
          c = 'a'; 
          break;
        default:
          // No modifica otros caracteres
          break;
      }
    }
    lines.push_back(line);
  }

  archivo.close(); // Cerramos el archivo, para poder abrirlo con otra "modalidad" en este caso

  // Reabre el archivo para escritura
  archivo.open(file_name, std::ios::out | std::ios::trunc); // std::ios:trunc elimina el contenido del fichero al abrirlo y debe estar con out
  if (archivo.fail()) {
    std::cerr << "Error al reabrir el fichero para escribir\n";
    return;
  }

  // Escribe las líneas modificadas
  for (const auto& modified_line : lines) {
    archivo << modified_line << '\n';
  }

  archivo.close();
}