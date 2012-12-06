#include <iostream>

#include "bumpngrind.hpp"

int main(
    int argc,
    char **argv) {
  for(int i = 0; i < 10; ++i) {
    int* j = new int;
    delete j;
  }

  return 0;
}
