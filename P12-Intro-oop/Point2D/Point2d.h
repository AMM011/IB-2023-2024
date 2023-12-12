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

#pragma once
#include <iostream>
#include <cmath>

class Point2D {
  public:
  // Constructor
  Point2D(int x, int y);

  // Getters
  double get_x() const { return x_; }
  double get_y() const { return y_; }

  // Setters
  void set_x(const int& x) { x_ = x;}
  void set_y(const int& y) { y_ = y;}

  // Methods 
  void Show(); 
  void Move();
  void Distance(const Point2D& point);
  void Middle(const Point2D& point);

  // Operator overload
  friend std::istream& operator>>(std::istream& is, Point2D& point);

private: 
  // Atributtes
  double x_, y_;
};