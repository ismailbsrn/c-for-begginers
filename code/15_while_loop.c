#include <stdio.h>

int main()
{
  int n = 0;

  while (n != 12)
  {
    printf("enter a number between 0-20: ");
    scanf("%d", &n);
  }
  printf("congrats!\n");
  return 0;
}