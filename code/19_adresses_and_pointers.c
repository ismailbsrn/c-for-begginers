#include <stdio.h>

int main() {
    int a = 1;
    int* p = &a;
    printf("The address of a is %p\n", p);
    printf("The value of a is %d\n", *p);
    return 0;
}