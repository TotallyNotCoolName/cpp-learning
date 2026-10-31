#include <iostream>

// Zadanie 2: suma, roznica i iloczyn dwoch liczb rzeczywistych

int main() {
  double a, b;

  std::cout << "Podaj dwie liczby: ";
  std::cin >> a >> b;

  std::cout << "Suma: " << a + b << std::endl;
  std::cout << "Roznica: " << a - b << std::endl;
  std::cout << "Iloczyn: " << a * b << std::endl;
  return 0;
}
