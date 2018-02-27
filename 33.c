#include<stdio.h>
int main()
{
    int n,m,i,gcd,lcm,n1,m1;
    scanf("%d %d",&n,&m);
    n1=n;
    m1=m;
    for(i=1;i<=n1&&i<=m1;i++)
    {
        if(((n1%i)==0) && ((m1%i)==0))
        gcd=i;
    }
    
     lcm=(n1*m1)/gcd;
     printf("%d",lcm);
     
        return 0;
}
