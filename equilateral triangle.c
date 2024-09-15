#include <stdio.h>

int main()
{ int a,b,c;
    printf("ENTER THE FIRST SIDE OF THE TRIANGLE: ");
    scanf("%d",&a);
    printf("ENTER THE SECOND SIDE OF THE TRIANGLE: ");
    scanf("%d",&b);
    printf("ENTER THE THIRD SIDE OF THE TRIANGLE: ");
    scanf("%d",&c);
    if(a==b && b==c )
    {
        printf("YOUR TRIANGLE IS EQUILATERAL");
    }
    else
    {
        printf("YOUR TRIANGLE ISN'T EQUILATERAL");
    }
    return 0;
}
