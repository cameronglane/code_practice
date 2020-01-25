// Playing with stack and heap memory.

#include <iostream>
#include "memory_practice.h"

int main() {
  /*mem_function();

  int * p = new int;  
  *p = 3;
  printf("   p = %p\n", p);
  
  mem_pass_by_ref(*p);

  delete p;

  std::cout << "deleting p." << std::endl;
  std::cout << *p << std::endl;*/

  int * p = allocate_int(7);
  std::cout << *p << std::endl;

  delete p;

  std::cout << *p << std::endl;

  return 0;
}

void mem_function() {
  printf("Inside mem_function():\n");

  int num = 7;
  int * ptr = &num;

  printf(" num = %i\n", num);
  printf(" ptr = %p\n", ptr);
  printf("&ptr = %p\n", &ptr);
  printf("*ptr = %i\n", *ptr);

  return;
}

void mem_pass_by_ref(int &passed_num) {
  printf(" passed_num = %i\n", passed_num);
  printf("&passed_num = %p\n", &passed_num);

  return;
}

int * allocate_int(int num) {
  int * p = new int(num);

  return p;
}