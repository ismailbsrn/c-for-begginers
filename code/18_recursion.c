#include<stdio.h>

int multiplyNumbers(int n);

int main() {
    int n;
    printf("enter a number: ");
    scanf("%d",&n);
    printf("factorial of %d is %d", n, multiplyNumbers(n));
    return 0;
}

int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
        return 1;
}