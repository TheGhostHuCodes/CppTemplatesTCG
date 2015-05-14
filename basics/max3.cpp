#include <iostream>
#include <cstring>
#include <string>

// maximum of two values of any time.
template <typename T> inline T const& max(T const& a, T const& b) {
  return a < b ? b : a;
}

// maximum of two pointers.
template <typename T> inline T* const& max(T* const& a, T* const& b) {
  return *a < *b ? b : a;
}

// maximum of two C-strings.
inline char const* const& max(char const* const& a, char const* const& b) {
  return std::strcmp(a, b) < 0 ? b : a;
}

int main() {
  int a = 7;
  int b = 42;
  ::max(a, b);

  std::string s = "hey";
  std::string t = "you";
  ::max(s, t);

  int* p1 = &b;
  int* p2 = &a;
  ::max(p1, p2);

  char const* s1 = "David";
  char const* s2 = "Nico";
  ::max(s1, s2);

  return 0;
}
