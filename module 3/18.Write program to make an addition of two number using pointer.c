#include<stdio.h>
int main ()
{
	int *a,*b;
	int c[20];
	a=&c[0];	
	b=&c[1];
	printf("\n\tenter first number :- ");
	scanf("%d",&*a);
	printf("\tenter second number :- ");
	scanf("%d",&*b);
	printf("\n\tYour addition is %d.",*a + *b);	
}
