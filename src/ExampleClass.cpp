#include <stdexcept>
#include "CppTemplate/ExampleClass.hpp"

ExampleClass::ExampleClass() {
    throw std::runtime_error("Not implemented: ExampleClass");
}

void ExampleClass::print(std::ostream &outstr) {
    outstr << "Hello Worlds";
}