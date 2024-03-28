// If the year is divisible by four, it's a leap year.
// But if the year can be divided by 100 as well as four, it's not a leap year.
// However, if the year is divisible by 400, it is a leap year.

#include <stdio.h>

int checkLeapYear(int year)
{
  if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int main()
{
  int year, month, day;
  printf("Enter a date (yyyy mm dd): ");
  scanf("%d %d %d", &year, &month, &day);
  int max;

  if (month == 2)
  {
    if (checkLeapYear(year))
    {
      max = 29;
    }
    else
    {
      max = 28;
    }
  }
  else if (month == 4 || month == 6 || month == 9 || month == 11)
  {
    max = 30;
  }
  else
  {
    max = 31;
  }

  day++;

  if (day > max)
  {
    day = 1;
    month++;

    if (month > 12)
    {
      month = 1;
      year++;
    }
  }

  printf("Updated date: %d %d %d\n", year, month, day);
  return 0;
}