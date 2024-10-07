/*Maksim Lazarev st128707@student.spbu.ru
second tusk b*/

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
  std::cout << "Введите выражение в виде обратной польской записи через пробелы:" << '\n';

  std::string input;
  std::string input_unstream;
  getline(std::cin, input_unstream);
  std::stringstream ss(input_unstream);

  int* arr = new int [50];
  int* q = &arr[0] - 1;

  while (getline(ss, input, ' ')) {
    if (input == "+" || input == "-" || input == "*" || input == "/") {
      int result = calculate(*(q - 1), *q, input);
      q -= 1;
      *q = result;
    }else {
      q += 1;
      *q = std::stoi(input);
    }
  }
  std::cout << "Ответ: " << *q << '\n';
  delete [] arr;
}