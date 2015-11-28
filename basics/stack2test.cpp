#include <iostream>
#include <string>
#include <cstdlib>
#include <stdexcept>
#include "stack2.hpp"

int main() {
  try {
    Stack<int> intStack;
    Stack<std::string> stringStack;

    // manipulate int stack.
    intStack.push(7);
    std::cout << intStack.top() << std::endl;

    // manipulate string stack.
    stringStack.push("hello");
    std::cout << stringStack.top() << std::endl;
    stringStack.pop();
    stringStack.pop();
  } catch (std::exception const& ex) {
    std::cerr << "Exception: " << ex.what() << std::endl;
    return EXIT_FAILURE; // exit program with ERROR status.
  }
  return 0;
}
