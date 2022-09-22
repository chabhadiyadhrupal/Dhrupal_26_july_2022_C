#include<stdio.h>
int main()
{
	int i,j;
   for(i=1; i<=6; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf(" %d ",i);
		}
			printf("\n");
	}
     for(i=6; i>=10; i--)
	{
		for(j=6; j<=i; j++)
		{
			printf(" %d ",i);
		}
			printf("\n");
		}
}
