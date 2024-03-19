// digits from left to right

#include <stdio.h>

int main()
{
  int i, a, remainder, digit;
  printf("enter: ");
  scanf("%d", &i);
  a = 1000000000;

  for (int c = 1; c < 11; c++)
  {
    remainder = i % a;
    digit = i / a;
    printf("%d\n", digit);
    i = remainder;
    a /= 10;
  }

  return 0;
}