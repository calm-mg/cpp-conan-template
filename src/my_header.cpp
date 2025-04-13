#include "my_header.hpp"
#include <fmt/core.h>
#include <iostream>

void print_hello() {
  std::cout << "This is from a header-defined function!" << std::endl;
}

void hihi::test() {
  int a = 0;
  int b = 10;
}