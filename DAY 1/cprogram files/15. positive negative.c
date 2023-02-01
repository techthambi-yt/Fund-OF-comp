#include<stdio.h>
int main()
{
	int a;
	printf("enter the number to be checked");
	scanf("%d",&a);
	if(a<0)
		printf("%d is negative",a);
	else if(a>0) 
		printf("%d is positive",a);
	else 
	printf("%d is neither positive nor negative",a);
	}