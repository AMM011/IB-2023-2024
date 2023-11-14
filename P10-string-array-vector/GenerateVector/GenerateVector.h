/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 14/11/2023
 * @brief este programa devuelve un vector de double aleatorios
 * @see https://google.github.io/styleguide/cppguide.html
 *
 */

#pragma once

#include <iostream>
#include <vector>
#include <random> 
#include <ctime>
#include <algorithm> // std::sort, std::unique, 

class Vector {
  public:
  // Constructor
  Vector(const int& size, const double& lower, const double& upper);

  // Getters
  int get_size() const {return size_;}
  double get_lower() const {return lower_;}
  double get_upper() const {return upper_;}

  // Setters
  void set_size(const int& size) {size_ = size;}
  void set_lower(const double& lower) {lower_ = lower;}
  void set_upper(const double& upper) {upper_ = upper;}

  // Methods
  std::vector<double> GenerateVector();
  void ReadVector(const std::vector<double>& vector);
  void SortVector(const std::vector<double>& vector);
  void UniqueVector(const std::vector<double>& vector);

  // E/R
  void EnterLowerUpperSize(std::istream& = std::cin);
  void ReadLowerUpperSize(std::ostream& = std::cout);

  private:
  int size_;
  double lower_;
  double upper_;
};

// void EnterLowerUpper(int& lower, int& upper);
// void EnterSize(int& size);
// void ReadLowerUpperSize(const int& lower, const int& upper, const int& size);
// std::vector<double> GenerateVector(const int size, const double lower, const double upper);
// void ReadVector(const std::vector<double>& vector);
// void SortVector(std::vector<double>& vector);
// void ReadSortedVector(const std::vector<double>& vector);
// void UniqueVector(std::vector<double>& vector);