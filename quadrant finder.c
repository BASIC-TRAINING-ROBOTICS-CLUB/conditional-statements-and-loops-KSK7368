#include <stdio.h>

int main()
{int a,b,c;
    printf("ENTER X COORDINATE:\n");
    scanf("%d",&a);
    printf("ENTER Y COORDINATE:\n");
    scanf("%d",&b);
    if(a>0 && b>0)
    {
        printf("THIS POINT LIES IN 1ST QUADRANT");
    }
    else if(a<0 && b>0)
    {
        printf("THIS POINT LIES IN 2ND QUADRANT");
    }
    else if(a<0 && b<0)
    {
        printf("THIS POINT LIES IN 3RD QUADRANT");
    }
    else if(a<0 && b>0)
    {
        printf("THIS POINT LIES IN 4TH QUADRANT");
    }
   else if(a==0)
   {printf("THIS POINT LIES ON Y AXIS");}
   else if(b==0)
   {printf("THIS POINT LIES ON X AXIS");}
   else
   printf("YOUR POINT IS LOCATED AT ORIGIN");
   
   
   
    return 0;
}
