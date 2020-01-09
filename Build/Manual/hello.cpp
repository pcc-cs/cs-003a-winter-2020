/**
 * Copyright (c) 2020, Sekhar Ravinutala.
 */
#include <iostream>
#include "greeting.h"

int main() {
  std::cout << "Hello, world" << std::endl;

  std::string name;
  std::cout << "Name: ";
  std::cin >> name;
  std::cout << greeting(name) << std::endl;
}
