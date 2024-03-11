#include <stdio.h>

int main()
{
  int age;
  printf("enter your age: ");
  scanf("%d", &age);
  printf("your age is %d\n", age);

  float gpa;
  printf("enter your gpa: ");
  scanf("%f", &gpa);
  printf("\nyour gpa is %f\n", gpa);

  char c;
  printf("\nenter your grade: ");
  scanf(" %c", &c);
  printf("\nyour grade is %c\n", c);

  char name[20];
  printf("\nenter your name: ");
  scanf("%s", name);
  printf("\nyour name is: %s\n", name);

  char fullName[50];
  printf("\nenter your full name: ");
  scanf("%s", fullName);
  printf("\nyour full name is: %s\n", fullName);

  char nameSurname[50];
  printf("\nenter your full name (using): ");
  fgets(nameSurname, sizeof(nameSurname), stdin);
  printf("\nyour full name is (using fgets): %s\n", nameSurname);

  return 0;
}