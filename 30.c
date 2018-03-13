#include <stdio.h>
 
int main(void) {
	int i,s=0,s1=0;
	for(i=1;i<=15;i++)
	{
		s=s+i;
	}
	for(int j=15;j<=45;j++)
	{
		if(j%2!=0)
		{
			s1=s1+j;
		}
	}printf("%d\n%d",s,s1);
}
