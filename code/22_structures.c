#include <stdio.h>

struct student
{
  int roll_no;
  char name[20];
  float marks;
};

int main()
{
  struct student s1;

  printf("Enter roll number: ");
  scanf("%d", &s1.roll_no);

  printf("Enter name: ");
  scanf("%s", s1.name);

  printf("Enter marks: ");
  scanf("%f", &s1.marks);

  printf("Roll number: %d\n", s1.roll_no);
  printf("Name: %s\n", s1.name);
  printf("Marks: %.2f\n", s1.marks);

  return 0;
}
// struct structure_name str;
// str.member1 = value1;
// str.member2 = value2;
// str.member3 = value3;


// struct structure_name str = { value1, value2, value3 };
// struct structure_name str = { .member1 = value1, .member2 = value2, .member3 = value3 };
