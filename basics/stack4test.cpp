#include "stack4.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <stdexcept>

int main() {
  try {
    Stack<int, 20> int20Stack;
    Stack<int, 40> int40Stack;
    Stack<std::string, 40> stringStack;

    // Manipulate stack of up to 20 ints.
    int20Stack.push(7);
    std::cout << int20Stack.top() << std::endl;
    int20Stack.pop();

    // Manipulate stac of up to 40 strings.
    stringStack.push("hello");
    std::cout << stringStack.top() << std::endl;
    stringStack.pop();
    stringStack.pop();
  } catch (std::exception const& ex) {
    std::cerr << "Exception: " << ex.what() << std::endl;
  }
  return 0;
}
