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

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

void Usage(int argc, char *argv[]);
void FileGeneratorAToZ(const std::string& file_name);