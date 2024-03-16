#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("file.txt", "w");
    char input[100];
    printf("Enter some text: ");
    fgets(input, 100, stdin);
    fprintf(file, "%s", input);

    fclose(file);
    return 0;
}