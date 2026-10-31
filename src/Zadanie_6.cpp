#include <iostream>

// Zadanie 6: najwieksza z trzech liczb calkowitych

int main() {
  int a, b, c;

  std::cout << "Podaj trzy liczby: ";
  std::cin >> a >> b >> c;

  int max = a;
  if (b > max) {
    max = b;
  }
  if (c > max) {
    max = c;
  }

  std::cout << "Najwieksza liczba: " << max << std::endl;
  return 0;
}
