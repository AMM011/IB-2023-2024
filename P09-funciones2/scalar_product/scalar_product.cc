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
#include "scalar_product.h"

void AddNumers(std::vector<int>& vector) {
  int number {0};
  while(std::cin >> number && number != -1) {
    vector.push_back(number);
  }
}

void ReadVector(std::vector<int>& vector) {
  std::cout << "{ ";
  for(int i {0}; i < vector.size(); ++i) {
    std::cout << vector[i] << " ";
  }
  std::cout << "}";
}

int ScalarProduct(const std::vector<int>& v1, const std::vector<int>& v2) {
  if(v1.size() != v2.size()) throw std::domain_error("Tienen diferente tamaño");
  int result {0};
  for(int i {0}; i < v1.size(); ++i) {
    result += (v1.at(i)*v2.at(i));
  }
  return result;
}