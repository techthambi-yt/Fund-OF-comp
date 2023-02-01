#include<stdio.h>
int main()
{
	int a,sum=0,cube;
	printf("enter the last number");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		cube=i*i*i;
		sum+=cube;
	}
	printf("%d ",sum);
}