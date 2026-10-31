#include <iostream>

// Zadanie 9: liczby parzyste z zakresu 1-100

int main() {
  for (int i = 2; i <= 100; i += 2) {
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
