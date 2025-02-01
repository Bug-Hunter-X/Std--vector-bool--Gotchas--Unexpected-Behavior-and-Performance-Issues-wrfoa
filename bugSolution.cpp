#include <iostream>
#include <vector>

int main() {
  // Use std::vector<char> as a safer alternative
  std::vector<char> boolVector;
  boolVector.push_back(1); // true
  boolVector.push_back(0); // false

  for (char b : boolVector) {
    std::cout << b << " ";
  }
  std::cout << std::endl;

  return 0;
}
