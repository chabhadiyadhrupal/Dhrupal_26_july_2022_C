#include<stdio.h>
#include<math.h>
int reverse(int number)
{
	int c;
    int digit = log10(number);
    if(number == 0)
        return 0;
    return ((number%10 * pow(10, digit)) + reverse(number/10));
}
int main ()
{
	int digit ;
	int number;
	printf("Enter the number :- ");
	scanf("%d",&number);
	if (number == reverse (number))
		printf("\n%d is palindrome number.",number);
	else
		printf("\n%d is not a palindrome number.",number);
	return 0;
}
