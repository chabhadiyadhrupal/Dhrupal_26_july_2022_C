#include<stdio.h>
int main()
{
	int a,b=0,c,d;
	printf("Enter the number you want to summation : ");
	scanf("%d",&a);
	{
		for (d=1; d<10; d++)
		{
			c=a%10;
			b+=c;
			a/=10;
				if (a==0)
				{
					d=10;
					printf("Your summation is %d",b);
				}	
		}	
	}
}
