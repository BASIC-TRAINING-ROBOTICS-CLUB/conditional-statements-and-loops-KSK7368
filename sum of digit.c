#include <stdio.h>

int main()
{int a,sum=0;
    printf("enter your number");
    scanf("%d",&a);
    while(a!=0)
    {
        sum=sum+a%10;
        a=a/10;
    }
    printf("sum= %d",sum);

    return 0;
}
