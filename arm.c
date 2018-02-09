#include<stdio.h>
int main()
{
	int n,t,r,s=0;
	scanf("%d",&n);
	t=n;
	while(t!=0)
	{
		r=t%10;
		s=s+r*r*r;
		t=t/10;
	}
	if(s==n)
	{
		printf("armstrong",n);
	}
	else
	{
		printf("not an armstrong",n);
	}
	return 0;
	}
