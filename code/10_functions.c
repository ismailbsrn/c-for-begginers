#include <stdio.h>

void sayHi()
{
  printf("Hello World!\n");
}

void sayHello(char name[])
{
  printf("Hello %s", name);
}

void sum(int x, int y)
{
  printf("sum of %d and %d: %d", x, y, x + y);
}

void fun()
{ //  declaration
  // definition (the body of the function)
}

void example();

int main()
{
  sayHi();
  sayHello("John\n");
  sum(3, 2);
  return 0;
}

void example()
{
  printf("definition");
}