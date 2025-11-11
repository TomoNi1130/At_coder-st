#include <iostream>
#include <string>

int a, b, c;
std::string s;

int main() {
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  // std::cin >> b >> c;

  std::cin >> s;

  std::cout << (a + b + c) << " " << s << std::endl;

  return 0;
}