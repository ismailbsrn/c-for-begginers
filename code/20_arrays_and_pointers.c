#include <stdio.h>

int main(){
  int array[6] = {1, 2, 3, 4, 5, 6};
  int i;
  for (i = 0; i < 6; i++){
    printf("%p\n", &array[i]);
  }

  printf("%d\n", *array);
  printf("%d\n", *(array + 1));
  printf("%d\n", *(array + 2));
  printf("%d\n", *(array + 3));

  int a = 1;
  printf("%d\n", sizeof(array[0]));
  printf("%d\n", sizeof(a));
  return 0;
}