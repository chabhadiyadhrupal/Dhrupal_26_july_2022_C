#include<stdio.h>
int main()
{
	int a[20][20];
	int b[20][20];
	int c,d,e=0,f,g;
	
	printf("Enter raw column you want.");
	printf("\nEnter raw : ");
	scanf("%d",&f);
	printf("Enter column : ");
	scanf("%d",&g);
	
printf("\nEnter the value of element.\n");
printf("\nEnter the First matrics value.\n\n");
	for (c=0; c<f; c++)
	{
		for (d=0; d<g; d++)
		{
			printf("Enter Your element a[%d][%d] == ",c,d);
			scanf("%d",&a[c][d]);
		}
	}
printf("\nEnter the Second matrics value.\n\n");
	for (c=0; c<f; c++)
	{
		for (d=0; d<g; d++)
		{
			printf("Enter Your element b[%d][%d] == ",c,d);
			scanf("%d",&b[c][d]);
		}
	}
printf("\nYour answer is below.\n");
	for (c=0; c<f; c++)
	{
		for (d=0; d<g; d++)
		{
			e=a[c][d]+b[c][d];
			printf(" %d ",e);
		}
		printf("\n");
	}	
}
