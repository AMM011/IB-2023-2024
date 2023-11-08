#include <iostream>

int RandomNumber(int min, int max);

int main () {
  int min {0}, max {0};
  std::cin >> min >> max;
  std::cout << "[" << min << "," << max << "]" << " : " << RandomNumber(min, max) << std::endl;
  return 0;
}

int RandomNumber(int min = 0, int max = 100) {
  return min + (rand() % (max - min + 1));
}