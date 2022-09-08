#include<stdio.h>
#include<math.h>
int main()
{
	float d,h,r,si,ci;
    printf("Enter Your Principal Amount:");
    scanf("%f",&d);
    printf("Enter Your Rate of interest:");
    scanf("%f",&h);
    printf("Enter Your Time period(in Years):");
    scanf("%f",&r);
    si=(d*h*r)/100;
    printf("Your simple interest is:%f",si);
	ci=d*pow((1+(h/100)),r);
	ci-=d;
    printf("\nYour compound interest is:%f",ci);
}
