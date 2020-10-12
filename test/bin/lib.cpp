#include "Common.hpp"

int g() {
  f(1,2);

  libA();
  libB();
  libC();

  foo();
  bar();

  return 0;
}
