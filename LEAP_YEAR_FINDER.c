#include <stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("ENTER YEAR: ");
    scanf("%d",&a);
    if(a>2000)
    {
     if(a%4==0)
     {
         printf("LEAP YEAR");
     }
        else
        printf("NON LEAP YEAR");
        
    }
    else
    
    printf("invalid year(enter year after 2000");
    return 0;
}
