/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 11/07/2023
 * @brief este programa se encarga calcular la hipotesuna de un triangulo rectángulo
 * @see https://google.github.io/styleguide/cppguide.html
 *
 */
#pragma once
#include <iostream>
#include <cmath>
#include <iomanip>

void EnterCateto(double& cateto1, double& cateto2);
double Hypotenuse(const double& cateto1, const double& cateto2);
void ReadHypotenuse(const double& cateto1, const double& cateto2);