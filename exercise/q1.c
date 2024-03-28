#include <stdio.h>

void sort(int array[], int size)
{
  int i, j, temp;
  for (i = 0; i < size; i++)
  {
    for (j = i + 1; j < size; j++)
    {
      if (array[i] < array[j])
      {
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;
      }
    }
  }
}

int main()
{
  int myArray[3];
  printf("Enter 3 numbers: ");
  scanf("%d %d %d", &myArray[0], &myArray[1], &myArray[2]);
  sort(myArray, sizeof(myArray) / sizeof(myArray[0]));
  printf("Sorted array: %d %d %d\n", myArray[0], myArray[1], myArray[2]);

  return 0;
}