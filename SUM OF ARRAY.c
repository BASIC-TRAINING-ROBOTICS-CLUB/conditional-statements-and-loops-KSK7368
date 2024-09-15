#include <stdio.h>

int main()
{int a[15],i,sum=0;
    for(i=0;i<5;i++)
  {  printf("enter the number");
    scanf("%d",&a[i]);
    sum=sum+a[i];
  }
  printf("sum = %d",sum);

    return 0;
}
