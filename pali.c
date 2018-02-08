#include<stdio.h>
int main()
{
   int a,b,c,d,e;
   scanf("%d",&a);
   b=a/100;
   c=(a-(b*100))/10;
   d=a-((b*100)+(c*10));
   e=(d*100)+(c*10)+b;
   if(a==e)
   printf("IT iS a PALINDROME");
   else
   printf("IT IS NOt a PALINDROME");
   return 0;
}
