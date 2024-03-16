#include <stdio.h>

int main()
{
  // "w" mode will create a new file if it doesn't exist, and overwrite the file if it does exist
  // "a" mode will create a new file if it doesn't exist, and append to the file if it does exist
  // "r" mode will open an existing file for reading
  // "r+" mode will open an existing file for reading and writing
  // "w+" mode will create a new file if it doesn't exist, and open an existing file for reading and writing
  // "a+" mode will create a new file if it doesn't exist, and open an existing file for reading and writing
  FILE *file;
  file = fopen("C:\\Users\\bsrni\\Desktop\\c\\code\\file.txt", "a+");

  if (file == NULL)
  {
    printf("Failed to open the file.\n");
    return 1;
  }

  // Writing to the file
  char data[100];
  printf("Enter data to write to the file: ");
  fgets(data, sizeof(data), stdin);
  fprintf(file, "%s", data);

  // Reading from the file
  fseek(file, 0, SEEK_SET); // Move the file pointer to the beginning of the file

  char buffer[100];
  fread(buffer, sizeof(char), sizeof(buffer), file);
  printf("Data read from file: %s\n", buffer);

  fclose(file);

  return 0;
}