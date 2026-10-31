#include <iostream>

// Zadanie 4: pole i obwod kola

int main() {
  const double PI = 3.14159;
  double r;

  std::cout << "Podaj promien kola: ";
  std::cin >> r;

  std::cout << "Pole: " << PI * r * r << std::endl;
  std::cout << "Obwod: " << 2 * PI * r << std::endl;
  return 0;
}
