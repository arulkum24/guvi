#include<stdio.h>
int main()
{
int n,p,i;
int pow=1;
scanf("%d",&n);
scanf("%d",&p);
for(i=0;i<p;i++)
{
pow= pow * n;
}
printf("%d",pow);
return 0;
}
