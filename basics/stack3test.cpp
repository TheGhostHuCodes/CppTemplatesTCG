#include "stack3.hpp"
#include <iostream>
#include <deque>
#include <cstdlib>
#include <stdexcept>

int main() {
  try {
    Stack<int> intStack;
    Stack<double, std::deque<double>> doubleStack;

    // manipulate int stack.
    intStack.push(7);
    std::cout << intStack.top() << std::endl;

    // manipulate string stack.
    doubleStack.push(42.42);
    std::cout << doubleStack.top() << std::endl;
    doubleStack.pop();
    doubleStack.pop();
  } catch (std::exception const& ex) {
    std::cerr << "Exception: " << ex.what() << std::endl;
    return EXIT_FAILURE; // exit program with ERROR status.
  }
  return 0;
}
