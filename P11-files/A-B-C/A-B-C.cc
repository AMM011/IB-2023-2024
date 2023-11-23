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

void Usage(int argc, char *argv[]) {
  if (argc < 2) {
    std::cerr << "Uso: " << argv[0] << " <nombre_del_fichero>\n";
    return;
  }
}

//Generador de fichero desde a hasta z
void FileGeneratorAToZ(const std::string& file_name) {
  std::ifstream archivo;
  archivo.open(file_name.c_str(), std::ios::in);
  if(archivo.fail()) {
    std::cerr << "Error al abrir el fichero" << std::endl;
    return;
  }

  std::string line;

  while(archivo >> line) {
    std::ofstream archivo2;
    archivo2.open((line.substr(0,1) + ".txt").c_str(), std::ios::app);
    archivo2 << line << std::endl;
    archivo2.close();
  }
  archivo.close();
}