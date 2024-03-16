#include <stdio.h>

int main() {
    FILE *file;
    file = fopen("file.txt", "r");
    char output[100];
    fscanf(file, "%s", output);
    printf("Data from file: %s\n", output);
    
    fclose(file);
    return 0;
}