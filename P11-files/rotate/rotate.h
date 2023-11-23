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

#pragma once
#include <iostream>
#include <fstream> 
#include <string>
#include <vector>
#include <cctype>

void Usage(int argc, char *argv[]);
void Rotate(const std::string& file_name);