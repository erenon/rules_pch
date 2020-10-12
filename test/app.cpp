#include "Common.hpp"

#include <iostream>

int main()
{
  f(1,2);

  std::cout << libA() << "\n";
  std::cout << libB() << "\n";
  libC();

  foo();
  bar();

  std::cout << MY_STR << "\n";
  std::cout << MY_VAR << "\n";

  return 0;
}
