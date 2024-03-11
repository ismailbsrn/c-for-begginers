#include <stdio.h>

int main()
{
  int x = 3;

  x += 1;
  printf("%d\n", x);

  x -= 1;
  printf("%d\n", x);

  x *= 3;
  printf("%d\n", x);

  x /= 3;
  printf("%d\n", x);

  x %= 2;
  printf("%d\n", x);

  return 0;
}