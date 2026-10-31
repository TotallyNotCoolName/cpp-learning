#include <iostream>

// Zadanie 10: suma liczb nieparzystych z zakresu 1-100

int main() {
  int suma = 0;

  for (int i = 1; i <= 100; i += 2) {
    suma += i;
  }

  std::cout << "Suma liczb nieparzystych: " << suma << std::endl;
  return 0;
}
