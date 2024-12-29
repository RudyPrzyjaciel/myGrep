/**
* @file MyGrep.hpp 
*/
#pragma once

#include "ThreadPool.hpp"
#include <string>

struct MyGrepResultHolder {
private:
  int patterns = 0;
  int files = 0;

public:
  int GetNumberOfFiles();
  int GetNumberOfOccurances();
};

class MyGrep {
private:
  int ProcessInputArguments(int argc, char *argv[]);
  void PrintHelp();
  static void FindInFile(std::string path, std::string key);
  int PrepareOutputFiles();

  std::string keyword = "test";
  std::string start_directory = "";
  std::string log_file = "default.log";
  std::string result_file = "default.txt";
  int number_of_threads = 4;
  thread_pool pool;

public:
  int Run(int argc, char *argv[]);
  MyGrep() : pool(number_of_threads) {}
};
