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

#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <set>

// Estructura para representar un DFA.
struct DFA {
    unsigned int start_state;
    std::set<unsigned int> accept_states;
    std::vector<std::map<char, unsigned int>> transitions;
};

DFA ReadDFA(const std::string& file_name);
void PrintDFA(const DFA& dfa);