#include<stdio.h>
int a,b,c,d,e;
void dynamicnumber ()
{
	printf("\n** Enter the number upto you want to print **");
	printf("\n Enter number :-  ");
	scanf("%d",&a);
}
void startingnumber ()
{
	c=0;
	printf(" %d, ",c);
}
void fibonacciseries ()
{
	c=1;
	for (d=0; d<a; d++)
	{
		if (b<a)
		{	
			e=b;
			b=b+c;
			c=e;
		}
		if (b<a)
		{	
			printf(" %d, ",b);
		}
	}
}
void main()
{
	dynamicnumber ();
	startingnumber ();
	fibonacciseries ();
}

