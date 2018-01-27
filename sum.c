#include<stdio.h>
void main()
{
    int a,b,c=0;
    printf("sum upto:");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    c=c+b;
    printf("sum is %d",c);
}
