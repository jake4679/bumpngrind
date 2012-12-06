#include <iostream>

#include "bumpngrind.hpp"

using namespace std;

void * operator new (
    size_t size) {
  void *p = malloc(size); 

  cout << "Allocation of " << size << " bytes @ " << p << " from " << __builtin_return_address(1) << endl;

  return p;
}

void operator delete (
    void* ptr) {
  cout << "Deallocation of " << ptr << " from " << __builtin_return_address(1) << endl;

  free(ptr); 
}
