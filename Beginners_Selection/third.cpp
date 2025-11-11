#include <iostream>

bool s[3] = {};

int main() {
  std::string buf = "";
  std::cin >> buf;
  int marbles = 0;
  for (int i = 0; i < 3; i++) {
    if (buf[i] == '1')
      marbles++;
  }
  std::cout << marbles << std::endl;
}