#include <iostream>

#include "foo.h"

struct Foo {};

std::ostream& operator<<(std::ostream& out, const Foo& foo) {
  (void)foo;
  return out << "Printing foo...";
}

int main(int argc, char* argv[]) {
  for (int i = 0; i < argc; i++) {
    std::cout << *(argv + i) << std::endl;
  }
  std::cout << "It works" << std::endl;

  Foo foo;
  std::cout << foo << std::endl;

  std::cout << add(1, 1) << std::endl;

  return 0;
}