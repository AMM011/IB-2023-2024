/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 20/11/2023
 * @brief Este programa se encarga de leer un fichero de texto y situar cada palabra en su fichero con su inicial correspondiente
 * @see https://google.github.io/styleguide/cppguide.html
 * 
 */

#include "A-B-C.h"

int main(int argc, char *argv[]) {
  Usage(argc, argv);
  std::string file_name {argv[1]};
  FileGeneratorAToZ(file_name);
  return 0;
}