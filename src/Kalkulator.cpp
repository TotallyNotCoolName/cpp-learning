#include <iostream>

// Zadanie specjalne (czesc 2): prosty kalkulator

int main() {
  double a, b;
  int wybor;

  std::cout << "Podaj dwie liczby: ";
  std::cin >> a >> b;

  std::cout << "Wybierz dzialanie:" << std::endl;
  std::cout << "1. Dodawanie" << std::endl;
  std::cout << "2. Odejmowanie" << std::endl;
  std::cout << "3. Mnozenie" << std::endl;
  std::cout << "4. Dzielenie" << std::endl;

  std::cin >> wybor;

  if (wybor == 1) {
    std::cout << "Wynik: " << a + b << std::endl;
  } else if (wybor == 2) {
    std::cout << "Wynik: " << a - b << std::endl;
  } else if (wybor == 3) {
    std::cout << "Wynik: " << a * b << std::endl;
  } else if (wybor == 4) {
    if (b == 0) {
      std::cout << "Blad: nie mozna dzielic przez zero!" << std::endl;
    } else {
      std::cout << "Wynik: " << a / b << std::endl;
    }
  } else {
    std::cout << "Nieprawidlowy wybor!" << std::endl;
  }
  return 0;
}
