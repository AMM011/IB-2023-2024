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

#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

void CreateFile(const std::string& file_name);
void AddText(const std::string& file_name);
void VowelsAndConsonantCounter(const std::string& file_name);