#include <iostream>

// Zadanie 7: sprawdzenie, czy z trzech odcinkow da sie narysowac trojkac

int main() {
  int a, b, c;

  std::cout << "Podaj trzy dlugosci odcinkow: ";
  std::cin >> a >> b >> c;

  if (a + b > c && a + c > b && b + c > a) {
    std::cout << "Tak" << std::endl;
  } else {
    std::cout << "NIE" << std::endl;
  }
  return 0;
}
