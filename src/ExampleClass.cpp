#include "CppTemplate/ExampleClass.hpp"
#include <stdexcept>

ExampleClass::ExampleClass() {}

void ExampleClass::print(std::ostream &outstr) { outstr << "Hello Worlds"; }