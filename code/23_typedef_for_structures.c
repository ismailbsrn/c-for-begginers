#include <stdio.h>

struct student
{
  char name[50];
  int roll;
  float marks;
};

typedef struct student Student;

typedef struct
{
  int x;
  int y;
} Point;

int main()
{
  Student s1;
  s1.roll = 1;
  printf("s1.roll = %d\n", s1.roll);

  Point p1 = {1, 2};
  printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
  return 0;
}
