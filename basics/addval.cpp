#include <string>
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T, int VAL> T addValue(T const& x) { return x + VAL; }

int main() {
  std::string s("hello");
  std::transform(s.begin(), s.end(), s.begin(), addValue<int, 1>);
  std::cout << s << std::endl;

  std::vector<double> v = { 1.1, 2.2, 3.3, 4.4, 5.5 };
  std::transform(v.begin(), v.end(), v.begin(), addValue<int, 1>);
  for (auto i : v) {
    std::cout << i << std::endl;
  }

  return 0;
}
