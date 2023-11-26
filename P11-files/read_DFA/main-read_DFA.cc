/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 23/11/2023
 * @brief Este programa se encarga de leer un fichero de texto e imprime en pantalla las características del mismo. 
 * @see https://google.github.io/styleguide/cppguide.html
 * 
 */

#include "read_DFA.h"

int main() {
  DFA dfa = ReadDFA("input.dfa");
  PrintDFA(dfa);
  return 0;
}