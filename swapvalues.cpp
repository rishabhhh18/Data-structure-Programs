#include <stdio.h>

int main() {
    int a, b, temp;
    printf("Enter number a: ");
    scanf("%d", &a);

    printf("Enter number b: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;

    printf("Swapped: a= %d, b= %d\n", a, b);
    return 0;
}

