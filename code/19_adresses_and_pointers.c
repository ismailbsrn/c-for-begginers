#include <stdio.h>

// two fubctions two demonstrate the use of pointers. one of them using the address of a variable and the other using the value of a variable
void value(int* a) {
    *a = *a + 1;
}

void reference(int a) {
    a = a + 1;
}

int main() {
    int a = 1;
    int b = 1;
    int* pointerA = &a;
    int* pointerB = &b;
    printf("The address of a is %p\n", pointerA);
    printf("The value of a is %d\n", *pointerA);

    value(&a);
    printf("The value of a after calling value() is %d\n", *pointerA);
    reference(b);
    printf("The value of a after calling reference() is %d\n", *pointerB);
    return 0;
}

