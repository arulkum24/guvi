#include<stdio.h>
void main()
{
int a[10],i,b;
printf("enter the limimt");
scanf("%d",&b);
printf("enter the element");
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
printf("the elements with index");
for(i=0;i<b;i++)
{
printf("%d\t%d\n",i,a[i]);
}
}
