#include <fstream> // file input/output
#include <iostream>
#include <string> // for strings in structs or file parsing
#include <chrono>
#include "diary.hpp"

int main(int argc, char *argv[]) {
  if (argc < 2)
  {
    std::cout << "Usage: " << argv[0] << " [write|read]\n";
    return 1;
  }
  std::string mode = argv[1];
Diary diary;
  // presents the list
  if (mode == "read")
  {
      std::ifstream file("output.txt");
    std::string line;
    if (file.is_open()) {
      while (std::getline(file, line)) {
        std::cout << line << std::endl;
      }
      file.close();
      return 0;
    }
  }
  // adds to the list
  //
  else if (mode == "write")
  {
    diary.write();
  }

  // to be added
  else if (mode == "delete")
  {
    return 0;
  }

  return 0;
}

