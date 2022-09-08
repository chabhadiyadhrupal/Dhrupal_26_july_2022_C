#include<stdio.h>
int  main()
{
	int a[3][3];
	int b,c;
	{
		for(b=0; b<3; b++)
		{
			for(c=0; c<3; c++)
			{
				printf("enter your no[%d][%d]",b,c );
				scanf("%d",&a[b][c]);
			}
		}
		for(b=0; b<3; b++)
		{
			for(c=0; c<3; c++)
			{
				printf(" %d",a[b][c]);
			}
			printf("\n");
		}
	}  
}
