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

#include "GenerateVector.h"

Vector::Vector(const int& size, const double& lower, const double& upper) {
  size_ = size;
  lower_ = lower;
  upper_ = upper;
}
//no
std::vector<double> Vector::GenerateVector() {
  std::vector<double> vector {};
  vector.reserve(this->get_size());
  std::default_random_engine generator;
  std::uniform_real_distribution<double> distribution(this->get_lower(),this->get_upper());
  for (int i = 0; i < this->get_size(); i++) {
    vector.push_back(distribution(generator));
  }
  std::shuffle(vector.begin(), vector.end(), generator); // Shuffle the vector
  return vector;
}  

// std::vector<double> Vector::GenerateVector() {
//   std::vector<double> vector {};
//   vector.resize(this->get_size());
//   vector.reserve(this->get_size());
//   std::default_random_engine generator;
//   std::uniform_real_distribution<double> distribution(this->get_lower(),this->get_upper());
//   for (int i = 0; i < this->get_size(); i++) {
//     vector[i] = distribution(generator);
//   }
//   return vector;
// }  

void Vector::ReadVector(const std::vector<double>& vector) {
  std::cout << "{ ";
  for (const auto& value : vector) {
    std::cout << value << " ";
  }
  std::cout << "}\n";
}

void Vector::SortVector(const std::vector<double>& vector) {
  std::vector<double> sorted_vector = vector;
  std::sort(sorted_vector.begin(), sorted_vector.end());
  this->ReadVector(sorted_vector);
}

void Vector::UniqueVector(const std::vector<double>& vector) {
  std::vector<double> unique_vector = vector;
  std::sort(unique_vector.begin(), unique_vector.end());
  unique_vector.erase(std::unique(unique_vector.begin(), unique_vector.end()), unique_vector.end());
  this->ReadVector(unique_vector);
}

void Vector::EnterLowerUpperSize(std::istream& is){
  std::cout << "Introduzca el tamaño del vector: ";
  is >> size_;
  std::cout << "Introduzca el limite inferior: ";
  is >> lower_;
  std::cout << "Introduzca el limite superior: ";
  is >> upper_;
}

void Vector::ReadLowerUpperSize(std::ostream& os){
  os << "El tamaño del vector es: " << this->get_size() << std::endl;
  os << "El limite inferior es: " << this->get_lower() << std::endl;
  os << "El limite superior es: " << this->get_upper() << std::endl;
}