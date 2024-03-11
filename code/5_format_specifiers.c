#include <stdio.h>

int main()
{
  int x = 1;
  float cgpa = 3.59;
  double result = 3.59 / 12;
  char c = 'A';
  char hi[] = "Hello World!";
  int *ptr = &x;

  printf("use d for integer: %d\n", x);
  printf("use f for float: %f\n", cgpa);
  printf("use lf for double: %lf\n", result);
  printf("use c for char: %c\n", c);
  printf("use s for string: %s\n", hi);
  printf("use p for address: %p\n", ptr);
  printf("use double percent sign: %%");

  return 0;
}