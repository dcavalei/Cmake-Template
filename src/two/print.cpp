#include "print.h"

#include <iostream>

namespace mylib::two {
  Print::Print(std::string name)
          : _name(std::move(name)) {
  }

  void Print::print_stateless(std::string_view str) {
      std::cout << str << std::endl;
  }

  void Print::print_state(std::string_view str) {
      std::cout << _name << ": " << str << std::endl;
  }
} // mylib::two
