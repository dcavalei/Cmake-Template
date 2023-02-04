#pragma once // PrintMock.h

#include "gmock/gmock.h"

#include "../../src/two/print.h"

class PrintMock : public mylib::two::Print {
  public:
    PrintMock() = default;
    explicit PrintMock(std::string name)
            : mylib::two::Print(std::move(name)) {}

    MOCK_METHOD(void, print_stateless, (std::string_view));
    MOCK_METHOD(void, print_state, (std::string_view));
};
