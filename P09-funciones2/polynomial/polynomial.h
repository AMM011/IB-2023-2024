/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 11/07/2023
 * @brief este programa se encarga de realizar un calculo con los polinomios dandos
 * @see https://google.github.io/styleguide/cppguide.html
 *
 */

#pragma once
#include <iostream>
#include <vector>
#include <cmath>

void EnterPolynomial(std::vector<int>& polynomial);
void ReadPolynomial(const std::vector<int>& polynomial);
int PolynomialValue(const std::vector<int>& polynomial, int value);