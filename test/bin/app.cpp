//#include <Common.hpp>
#include "Common.hpp"


#include "helper.hpp"

#include <iostream>

int main()
{
  std::cout << f(1,2) << "\n";

  std::cout << libA() << "\n";
  std::cout << libB() << "\n";
  libC();

  foo();
  bar();

  std::cout << MY_STR << "\n";
  std::cout << MY_VAR << "\n";

  return 0;
}
