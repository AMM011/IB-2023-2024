#include <iostream>
#include <cmath>

bool IsAValidTriangle(const double side1, const double side2, const double side3);
double HeronsFormula(const double side1, const double side2, const double side3);

int main () {
  double side1{0.f}, side2{0.f}, side3{0.f};
  std::cin >> side1 >> side2 >> side3;
  if(IsAValidTriangle(side1, side2, side3)) {
    std::cout << "Area: " << HeronsFormula(side1, side2, side3) << std::endl;
  } else {
    std::cout << "Not a valid triangle" << std::endl;
  }
  return 0;
}

bool IsAValidTriangle(const double side1, const double side2, const double side3) {
  return (side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1);
}

double HeronsFormula(const double side1, const double side2, const double side3) {
  double perimetre = (side1 + side2 + side3) / 2;
  return sqrt(perimetre * (perimetre - side1) * (perimetre - side2) * (perimetre - side3));
}