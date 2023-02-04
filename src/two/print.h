#pragma once // print_stateless.h

#include <string_view>
#include <string>

namespace mylib::two {
  class Print {
    public:
      Print() = default;
      explicit Print(std::string);

      static void print_stateless(std::string_view);
      void print_state(std::string_view);

    private:
      std::string _name;
  };
} // mylib::two
