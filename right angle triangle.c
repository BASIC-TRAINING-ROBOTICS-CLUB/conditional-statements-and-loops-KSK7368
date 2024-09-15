#include <stdio.h>

int main() {
    double a, b, c;
    printf("Enter hypotenuse: ");
    scanf("%lf", &a);
    printf("Enter perpendicular: ");
    scanf("%lf", &b);
    printf("Enter base: ");
    scanf("%lf", &c);
    if (a * a == b * b + c * c) {
        printf("The triangle is a right-angled triangle\n");
    } else {
        printf("The triangle is not a right-angled triangle\n");
    }
    return 0;
}
