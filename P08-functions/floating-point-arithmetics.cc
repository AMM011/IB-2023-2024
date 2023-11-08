#include <iostream>
#include <cmath>

//kEPSILON = 1e-6
const int kEPSILON = 1e-6;

bool AreEqual(const double number1, const double number2);

int main() {
  double number1 {0.f}, number2{0.f};
  std::cin >> number1 >> number2;
  if(AreEqual(number1, number2)) {
    std::cout << number1 << " == " << number2 << std::endl;
  } else {
    std::cout << number1 << " != " << number2 << std::endl;
  }
  return 0;
}

bool AreEqual(const double number1, const double number2) {
  return std::abs(number1 - number2) < kEPSILON;
}