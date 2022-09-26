5#include<stdio.h>
int A,B,C=1;
int Dynamicvalue ()
{
	printf("\n\t* Enter Any number to get Factorial :- ");
	scanf("%d",&A);
}
int Printvalue ()
{
	for(B=A; B>0; B--)
	{
		C*=B;
	}
	printf("\n\t--> Your number Factorial is %d.\n\n",C);
}
int main ()
{
	Dynamicvalue ();
	Printvalue ();
}


