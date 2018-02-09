#include <stdio.h>
int main()
{
  int n,k,i,j,f=0;
  scanf("%d %d",&n,&k);
  for(i=n;i<=k;i++)
  {
      for(j=2;j<=(n/2);j++)
      {
          if((i%j)==0)
          {
              f=1;
              break;
          }
          else
          {
              f=0;
          }
      }
       if(f==0)
        {
            printf("%d\n",i);
        }
  }
}
