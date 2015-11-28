#include <iostream>

// Minimum of two values of any type.
template <typename T> inline T const& max(T const& a, T const& b) {
  return a < b ? b : a;
}

// Maximum of three values of any type.
template <typename T> inline T const& max(T const& a, T const& b, T const& c) {
  return max(max(a, b), c); // Uses the template version even for ints because
                            // the following declaration comes too late.
}

// Maximum of two int values
inline int const& max(int const& a, int const& b) { return a < b ? b : a; }

int main() {
  std::cout << ::max(0, 7, 42) << std::endl;
  return 0;
}
