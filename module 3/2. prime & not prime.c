#include<stdio.h>
main()
{
	int n,flag=0,i=2,r;
	printf("enter a nomber:");
	scanf("%d",&n);
	while(i<n)
	{
		r=n%i++;
		if(r==0)
		{
			flag=1;
			break;
			
		}
	}
	if(flag==0)
	    printf("%d is prime",n);
	else
	    printf("%d is not prime",n);    
}
