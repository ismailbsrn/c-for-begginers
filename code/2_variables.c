#include <stdio.h>

int main()
{
  int a;              // valid
  int b = 1;          // valid
  int my_integer = 2; // valid
  int _c = 3;         // valid
  int c1 = 4;         // valid
  int 1c = 5;         // invalid: variable names must begin with letter or underscore _
  int c&d = 6;        // invalid: variable names can not contain special characters
  int 12 = 7;         // invalid: variable names can not contain just digits

  return 0;
}