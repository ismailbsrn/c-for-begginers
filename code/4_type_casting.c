#include <stdio.h>

int main()
{

  int x = 10;
  int y = 4;
  float result;

  result = x / y;
  printf("%f\n", result);      // prints 2.00

  result = (float)x / y;
  printf("%f\n", result);      // prints 2.50

  result = 10.0 / y;
  printf("%f\n", result);      // prints 2.50

  printf("%d\n", (int)result); // prints 2

  return 0;
}