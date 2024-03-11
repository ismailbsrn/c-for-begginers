#include <stdio.h>

int findMax(int a, int b, int c);

int main()
{
  int x, y, z;
  printf("enter first number: ");
  scanf("%d", &x);
  printf("enter second number: ");
  scanf("%d", &y);
  printf("enter third number: ");
  scanf("%d", &z);

  printf("greatest number is: %d", findMax(x, y, z));
  return 0;
}

int findMax(int a, int b, int c)
{
  if (a >= b && a >= c)
  {
    return a;
  }
  else if (b >= a && b >= c)
  {
    return b;
  }
  else
  {
    return c;
  }
}