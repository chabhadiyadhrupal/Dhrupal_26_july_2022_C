#include<stdlib.h>
#include<stdio.h>
int main()
{
	int *ptr,i,no;
	printf("ENTER SIZE : ");
	scanf("%d",&no);
	ptr=(int*)calloc(no,sizeof (int));
	for(i=0;i<no;i++)
		{
			printf("enter value %d :",i);
			scanf("%d",&ptr[i]);
		}
	for(i=0;i<no;i++)
		{
			printf("\n value %d is : %d",i,ptr[i]);
		}
		
	printf("\nENTER NEW SIZE :");
	scanf("%d",&no);
	ptr=(int*)realloc(ptr,no*sizeof (int));
	for(i=0;i<no;i++)
		{
			printf("enter value %d:",i);
			scanf("%d",&ptr[i]);
		}
	for(i=0;i<no;i++)
		{
			printf("\n value %d is : %d",i,ptr[i]);
		}
		free(ptr);
}
