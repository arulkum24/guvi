#include <stdio.h>
int main() 
{
	int mins,hour=0;
	scanf("%d",&mins);
	if(mins<60)
	{
	    printf("%d %d",hour,mins);
	}
	else 
	{
	    hour=mins/60;
	    mins=mins%60;
	    printf("%d %d",hour,mins);
}
