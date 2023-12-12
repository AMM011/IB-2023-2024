/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática básica
 *
 * @author Alfredo
 * @date 09/12/2023
 * @brief Este programa representa puntos en el espacio bidimensional a través de sus coordenadas
 * @see https://google.github.io/styleguide/cppguide.html
 * 
 */

#include "Point2d.h"

Point2D::Point2D(int x, int y) {
  x_ = x;
  y_ = y;
}

void Point2D::Show() {
  std::cout << "(" << this->get_x() << ", " << this->get_y() << ")" << std::endl;
}

void Point2D::Move() {
  int x, y;
  std::cout << "Introduce el desplazamiento en x e y: " << std::endl;
  std::cin >> x >> y;
  this->set_x(this->get_x() + x);
  this->set_y(this->get_y() + y);
}

void Point2D::Distance(const Point2D& point) {
  double distance {0.0};
  distance = sqrt(pow((this->get_x() - point.get_x()), 2) + pow((this->get_y() - point.get_y()), 2));
  std::cout << "La distancia entre los puntos es " << distance << std::endl;
}

void Point2D::Middle(const Point2D& point) {
  double middle_x {0.0}, middle_y {0.0};
  const double kfraction {2.0}; 
  middle_x = ((this->get_x() + point.get_x()) / kfraction);
  middle_y = ((this->get_y() + point.get_y()) / kfraction);
  std::cout << "El punto medio es (" << middle_x << ", " << middle_y << ")" << std::endl;
}

std::istream& operator>>(std::istream& is, Point2D& point) {
    is >> point.x_;
    is >> point.y_;
    return is;
}