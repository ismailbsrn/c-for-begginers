#include <stdio.h>

int main()
{

  int a = 5, b = 5; // change a and b to 2, then 10

  printf("Output of while loop\n");
  while (a < 3)
  {
    a++;
    printf("a: %d\n", a);
  }

  printf("Output of do - while loop\n");
  do
  {
    b++;
    printf("b: %d\n", b);
  } while (b < 3);

  return 0;
}