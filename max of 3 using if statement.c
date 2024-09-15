#include <stdio.h>

int main() {
    int a, b, c, d;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    d = a;
    if (b > d) {
        d = b;
    }
    if (c > d) {
        d = c;
    }
    printf("The maximum number is %d\n", d);
    return 0;
}
