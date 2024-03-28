// digits from left to right

#include <stdio.h>
#include <math.h>

int main()
{
  int i, a, remainder, digit;
  printf("enter: ");
  scanf("%d", &i);
  i = fabs(i);
  printf("%d\n", i);
  fputs("Digits from left to right: \n", stdout);
  a = 1000000000;

  for (int c = 0; c < 10; c++)
  {
    remainder = i % a;
    digit = i / a;
    if (digit != 0)
    {
      printf("%d\n", digit);
    }
    
    i = remainder;
    a /= 10;
  }

  return 0;
}