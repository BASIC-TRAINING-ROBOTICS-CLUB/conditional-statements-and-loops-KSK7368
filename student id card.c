#include <stdio.h>
#include<string.h>
struct student {
    char name[50];
    int roll;
    float cpi;
    char bran[30];
}s;

int main() {
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter cpi: ");
    scanf("%f", &s.cpi);
printf("Enter branch: ");
    fgets(s.bran, sizeof(s.bran), stdin);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("cpi: %.1f\n", s.cpi);

    return 0;
}
