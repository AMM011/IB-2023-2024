#include <iostream>
#include <cmath>

double function (const double number1, const double number2, const double number3);

int main () {
  double number1 {0.f}, number2 {0.f}, number3 {0.f};
  std::cin >> number1 >> number2 >> number3;
  std::cout << "Result: " << function(number1, number2, number3) << std::endl;
  return 0;
}

double function (const double number1, const double number2, const double number3) {
  return ((sqrt(2*number3 - 4)) / (pow(number1, 2) - pow(number2, 2)));
}