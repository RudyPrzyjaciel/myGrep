#include "MyGrep.hpp"

#include <fstream>
#include <iostream>
#include <ostream>
#include <chrono>

int MyGrep::ProcessInputArguments(int argc, char *argv[]) { return 0; }

void MyGrep::PrintHelp() { return; }

void MyGrep::FindInFile(std::string path, std::string key) {
  std::fstream file{path, std::ios::in};
  if (!file.is_open()) {
    std::cout << path << " not found" << std::endl;
    return;
  }

  std::string line = "";
  while (std::getline(file, line)) {
    if (!file.good()) {
      std::cout << "this is not good" << std::endl;
      return;
    }

    if (line.find(key) != line.npos) {
      std::cout << line << std::endl;
    }
  }
}

int MyGrep::PrepareOutputFiles() { return 0; }

int MyGrep::Run(int argc, char *argv[]) {
  int ret = 0;
  ret = ProcessInputArguments(argc, argv);
  if (ret != 0) {
    return ret;
  }

  const char *filename = "/home/slitmano/projects/myGrep/build/test.txt";
  pool.submit(FindInFile, filename, keyword);

  ret = PrepareOutputFiles();
  if (ret != 0) {
    return ret;
  }
  std::this_thread::sleep_for(std::chrono::seconds(2));
  return ret;
}
