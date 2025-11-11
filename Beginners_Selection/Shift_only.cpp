#include <algorithm>
#include <iostream>
#include <vector>

int N = 0;  // 要素数
std::vector<int> divided_nums = {};

int main() {
  std::cin >> N;
  int buf = 0;
  for (int i = 0; i < N; i++) {
    std::cin >> buf;
    if (buf % 2) {
      std::cout << '0' << std::endl;
      return 0;
    }

    int divided = 0;
    while (buf % 2 == 0) {
      divided++;
      buf /= 2;
    }
    divided_nums.push_back(divided);
  }
  std::cout << int(*std::min_element(divided_nums.begin(), divided_nums.end())) << std::endl;
  return 0;

  /*bit演算のみですると,,,（模範解答）

  int N, input, buf = 0, ans = 0;
  std::cin >> N;
  for (int i = 0; i < N; i++) {
    std::cin >> input;
    buf = (input | buf);  // bit和
  }
  while (!(buf & 1)) {
    buf = buf >> 1;
    ans++;
  }
  std::cout << ans << std::endl;
  return 0;

  */
}