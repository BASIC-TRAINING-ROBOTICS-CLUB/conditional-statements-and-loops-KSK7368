#include <stdio.h>

int main()
{ int a;
    printf("enter the number: ");
 scanf("%d",&a);
 if(a>0)
 {
     printf("your number is positive");
 }
 else if(a<0)
 {
     printf("your number is negative");
 }
else 
{
    printf("your number is zero");
}
    return 0;
}
