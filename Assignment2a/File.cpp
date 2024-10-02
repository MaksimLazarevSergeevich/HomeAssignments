#include <iostream>
#include <fstream>
#include <filesystem>


int main() {

  std::ifstream infile("test_1.bin", std::ios::binary);
  int fileSize = std::filesystem::file_size("test_1.bin");
  std::cout << "Размер файла: " << fileSize << "\n";

  char* buffer = new char[fileSize];
  infile.read(buffer, fileSize);

  for (int i = 0; i < fileSize / 2; i++) {
    std::swap(buffer[i], buffer[fileSize - i - 1]);
  }

  std::ofstream outfile("output.bin", std::ios::binary);
  outfile.write(buffer, fileSize);

  infile.close();
  outfile.close();

  delete[] buffer;
  return 0;
}