#include <iostream>

// Zadanie 3: pole i obwod prostokata

int main() {
  double a, b;

  std::cout << "Podaj dlugosci bokow a i b: ";
  std::cin >> a >> b;

  std::cout << "Pole: " << a * b << std::endl;
  std::cout << "Obwod: " << 2 * (a + b) << std::endl;
  return 0;
}
