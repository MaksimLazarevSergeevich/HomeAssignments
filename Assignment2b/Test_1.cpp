#include <iostream>
#include <string>
#include <sstream>

int calculate(int a, int b, std::string opers);

int calculate(int a, int b, std::string opers) {
  if (opers == "*") {
    return a * b;
  }else if(opers == "/") {
    return a / b;
  }else if(opers == "+") {
    return a + b;
  }else {
    return a - b;
  }
}


int main() {
  std::string input;
  std::string input_unstream;
  getline(std::cin, input_unstream);
  std::stringstream ss(input_unstream);

  int* arr = new int [4];
  int* q = &arr[3];

  while (getline(ss, input, ' ')) {
    if (input == "+" || input == "-" || input == "*" || input == "/") {
      int result = calculate(*(q - 1), *(q), input);
      std::cout << result << std::endl;
    }else {
      arr
    }
    
  }
}