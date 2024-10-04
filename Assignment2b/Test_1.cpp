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

  int* arr = new int [40];
  int* q = &arr[0] - 1;

  while (getline(ss, input, ' ')) {
    if (input == "+" || input == "-" || input == "*" || input == "/") {
      int result = calculate(*(q - 1), *q, input);
      std::cout << result << std::endl;
      q -= 1;
      *q = result;
      
    }else {
      q += 1;
      *q = std::stoi(input);
    }
    
  }
  std::cout << *q << '\n';
  delete [] arr;
}