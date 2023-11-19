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

int main(int argc, char *argv[]) {
  Usage(argc, argv);
  std::string file_name {argv[1]};
  VowelsAndConsonantCounter(file_name);
  return 0;
}

// MODIFICACIÓN DEL EJERCICIO:
//
// int main () {
//   std::string file_name {""};
//   const int ksalida {0};
//   const int kaux {1};
//   int opcion {kaux};
//   while(opcion != ksalida){
//     std::cout << "Introduzca la opción que desee realizar:\n";
//     std::cout << "1. Nombre del fichero.\n";
//     std::cout << "2. Crear un fichero.\n";
//     std::cout << "3. Añadir texto a un fichero.\n";
//     std::cout << "4. Contar vocales y consonantes de un fichero.\n";
//     std::cout << "0. Salir.\n";
//     std::cin >> opcion;
//     std::cin.ignore();
//     switch (opcion) {
//       case 1:
//       std::cout << "Introduzca el nombre del fichero: ";
//         getline(std::cin, file_name);
//         break;
//       case 2:
//         CreateFile(file_name);
//         break;
//       case 3:
//         AddText(file_name);
//         break;
//       case 4:
//         VowelsAndConsonantCounter(file_name);
//         break;
//       case 0:
//         std::cout << "Saliendo del programa...\n";
//         break;
//       default:
//         std::cout << "Opción no válida.\n";
//         break;
//     }
//   }
//   return 0;
// }