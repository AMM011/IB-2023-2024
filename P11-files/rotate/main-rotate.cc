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

int main(int argc, char* argv[]) {
  Usage(argc, argv);
  std::string file_name {argv[1]};
  Rotate(file_name);
  return 0;
}