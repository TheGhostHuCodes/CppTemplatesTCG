#include <iostream>
#include <cstring>
#include <string>

// Maximum of two values of any time (call-by-reference)
template <typename T> inline T const& max(T const& a, T const& b) {
  return a < b ? b : a;
}

// Maximum of two C-strings (call-by-value)
// inline char const* max(char const* a, char const* b) {
//   return std::strcmp(a, b) < 0 ? b : a;
// }

// Maximum of three values of any type (call-by-reference)
template <typename T> inline T const& max(T const& a, T const& b, T const& c) {
  return max(max(a, b), c); // Error, if max(a, b) uses call-by-value.
}

int main() {
  std::cout << ::max(7, 42, 68) << std::endl;

  // The max function overloaded for C-strings will be returned by value. The
  // templated max function which takes three arguments takes arguments by
  // reference and returns by reference. Since the three argument function
  // calls the two argument function, you could possibly return a local
  // temporary object by reference. Comment out C-strings function overload to
  // make things work.
  const char* s1 = "frederic";
  const char* s2 = "anica";
  const char* s3 = "lucas";
  std::cout << ::max(s1, s2, s3) << std::endl;

  return 0;
}
