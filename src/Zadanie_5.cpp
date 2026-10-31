#include <iostream>

// Zadanie 5: iloraz dwoch liczb rzeczywistych, ochrona przed dzieleniem przez
// zero

int main() {
  double a, b;

  std::cout << "Podaj dwie liczby: ";
  std::cin >> a >> b;

  if (b == 0) {
    std::cout << "Blad: nie mozna dzielic przez zero!" << std::endl;
  } else {
    std::cout << "Iloraz: " << a / b << std::endl;
  }
  return 0;
}
