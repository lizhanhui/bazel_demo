// #include <gtest/gtest.h>
#include <iostream>
#include <thread>

int main(int argc, char* argv[]) {
  std::cout << "It works" << std::endl;
  std::cout << std::this_thread::get_id() << std::endl;
  return 0;
}