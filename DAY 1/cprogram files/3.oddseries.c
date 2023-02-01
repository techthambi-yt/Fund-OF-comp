#include<stdio.h>
int main()
{
	int a;
	printf("enter the last number");
	scanf("%d",&a);
	for(int i=1;i<=a;i+=2)
	{
		printf("%d ",i);
	}
}