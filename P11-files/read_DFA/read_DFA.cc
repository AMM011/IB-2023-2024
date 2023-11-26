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

DFA ReadDFA(const std::string& file_name) {
  std::ifstream file(file_name);
  DFA dfa;
  if (file.fail()) {
    std::cerr << "Error al abrir el archivo." << std::endl;
    return dfa;
  }

  unsigned int num_states;
  file >> num_states >> dfa.start_state;
  dfa.transitions.resize(num_states);

  for (unsigned int i = 0; i < num_states; ++i) {
    unsigned int state_id, num_transitions;
    bool is_accept_state;
    file >> state_id >> is_accept_state >> num_transitions;

    if (is_accept_state) {
      dfa.accept_states.insert(state_id);
    }

    char input_symbol;
    unsigned int destination_state;
    for (unsigned int j = 0; j < num_transitions; ++j) {
      file >> input_symbol >> destination_state;
      dfa.transitions[state_id][input_symbol] = destination_state;
    }
  }
  file.close();

  return dfa;
}

void PrintDFA(const DFA& dfa) {
  std::cout << "|Q| = " << dfa.transitions.size() << "\n";
  std::cout << "q0 = " << dfa.start_state << "\nF = {";
  for (auto it = dfa.accept_states.begin(); it != dfa.accept_states.end(); ++it) {
    if (it != dfa.accept_states.begin()) std::cout << ", ";
    std::cout << *it;
  }
  std::cout << "}\n";

  for (unsigned int i = 0; i < dfa.transitions.size(); ++i) {
    for (const auto& transition : dfa.transitions[i]) {
      std::cout << "delta(" << i << ", " << transition.first << ") = " << transition.second << "\n";
    }
  }
}