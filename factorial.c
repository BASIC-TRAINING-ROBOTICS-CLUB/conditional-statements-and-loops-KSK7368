#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = 1;
    for (int c = 1; c <= a; c++) {
        b *= c;
    }
    printf("Factorial of %d is %d\n", a, b);
    return 0;
}
