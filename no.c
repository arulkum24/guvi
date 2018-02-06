#include <stdio.h>

void main()
{
    int x,y=0;
    printf("enter the  value:");
    scanf("%d",&x);
    while(x!=0)
    {
        x/=10;
        y+=1;
        }
        printf("there are the value=%d",y);
}
