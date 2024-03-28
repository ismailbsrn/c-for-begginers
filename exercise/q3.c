#include <stdio.h>

int main()
{
  int n;
  printf("Enter numbers: ");
  scanf("%d", &n);

  int sum = 0;
  int prev, num;
  scanf("%d", &prev);

  for (int i = 2; i <= n; i++)
  {
    scanf("%d", &num);
    sum += (num * prev);
    prev = num;
  }

  printf("Result: %d\n", sum);

  return 0;
}
