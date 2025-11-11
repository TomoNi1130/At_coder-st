#include <iostream>

int a, b;

int main() {
  std::cin >> a >> b;
  if ((a * b) % 2 == 0)
    std::cout << "Even" << std::endl;
  else
    std::cout << "Odd" << std::endl;
}