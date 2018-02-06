#include <stdio.h>

void main()
{
    int a,b=0;
    printf("enter the  value:");
    scanf("%d",&a);
    while(a!=0)
    {
        a/=10;
        b+=1;
        }
        printf("there are the value=%d",b);
}
