#include<stdio.h>
int main()
{
int n,a,d,i,sum=0;
scanf("%d %d %d",&n,&a,&d);
for(i=n;i>1;i--)
sum=sum+(a+(n-1)*d);
}
