#include<stdio.h>
int main ()
{
	int a[10], b, c;
	
	for (b=0; b<10; b++)
	{
		printf("Enter a[%d] = ",b);
		scanf("%d",&a[b]);
	}
	for (b=0; b<10; b++)
	{
		if (a[b] > a[0])
		{
			a[0] = a[b];
		}
	}
	for (b=0; b<10; b++)
	{
		if (a[0] == a[b])
		{
			c=b;
		}
	}
	printf("\na[%d] max element is %d.",c,a[0]);
}


