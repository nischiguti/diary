#include "diary.hpp"
#include <fstream> // file input/output
#include <iostream>
#include <string> // for strings in structs or file parsing
#include <chrono>

void Diary::write() 
{
    std::ofstream file;
    std::string filename;
    std::cin >> filename;
const auto now = std::chrono::system_clock::now();
    const std::time_t t_c = std::chrono::system_clock::to_time_t(now);
    std::string date = std::ctime(&t_c);
    filename = filename + "_" +  date;
    file.open(filename.append(".txt"), std::ios_base::app);
    std::string text;
    std::getline(std::cin,  text);

    file << std::ctime(&t_c) << std::endl;
  }

