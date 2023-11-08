/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 11/07/2023
 * @brief este programa resuelve diferentes calculos
 * @see https://google.github.io/styleguide/cppguide.html
 *
*/
#include "approximate_root.h"

void EnterNumber(double& number) {
  std::cout << "Introduce un número mayor que 0: ";
  std::cin >> number;
}

void MayorThatZero(const double& number) {
  if(fabs(pow(number, 2)) < kEPSILON) throw std::domain_error(" El número es menor que 0");
  std::cout << "El número es mayor que 0" << std::endl;
}

void RootDelta(double& root, double& delta) {
  double aux {0.f};
  std::cout << "Introde un valor mayor que 0, para root: ";
  std::cin >> aux;
  MayorThatZero(aux);
  root = aux;
  std::cout << "Introde un valor mayor que 0, para delta: ";
  std::cin >> aux;
  MayorThatZero(aux);
  delta = aux;
}

double Operation(double& root,double& delta, const double& number) {
  const double kconstante {-0.5};
  while(pow(root, 2) - delta > kEPSILON) {
    if(delta > kEPSILON) {
      while(pow(root, 2) < number) root += delta;
      std::cout << "entre\n";
    } else {
      while(pow(root, 2) > number) root += delta;
      std::cout << "entre_loco\n";
    }
    delta *= kconstante;
  }
  return root;
}