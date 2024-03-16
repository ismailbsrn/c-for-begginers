#include <stdio.h>
#include <string.h>

int main()
{
  FILE *file;
  char input[100];

  file = fopen("C:\\Users\\bsrni\\Desktop\\c\\code\\file.txt", "w");

  if (file == NULL)
  {
    printf("Unable to open the file.\n");
    return 1;
  }

  printf("Enter multiple lines of input (type -1 to stop):\n");
  while (fgets(input, sizeof(input), stdin) != NULL)
  {
    if (strcmp(input, "-1\n") == 0)
    {
      break;
    }
    fprintf(file, "%s", input);
  }

  fclose(file);

  return 0;
}