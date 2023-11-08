/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informatica Básica
 *
 * @author Alfredo
 * @date 11/07/2023
 * @brief este programa se encarga de realizar calculo de producto escalar
 * @see https://google.github.io/styleguide/cppguide.html
 *
 */

#pragma once
#include <iostream>
#include <vector>
#include <stdexcept>

int ScalarProduct(const std::vector<int>& v1, const std::vector<int>& v2);
void ReadVector(std::vector<int>& vector);
void AddNumers(std::vector<int>& vector);