#include <stdio.h>

int main()
{
  int score;
  printf("enter your score: ");
  scanf("%d", &score);

  if (score >= 80)
  {
    printf("congrats! you passed.");
  }
  else if (60 >= score < 80)
  {
    printf("no worries. you can still pass the class.");
  }
  else
  {
    printf("you failed.");
  }
  return 0;
}