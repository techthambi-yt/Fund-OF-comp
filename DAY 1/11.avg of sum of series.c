#include<stdio.h>
int main()
{
	int a,sum=0;
	printf("enter the last number:");
	scanf("%d",&a);
	for(int i=1;i<=a;i++)
	{
		sum=sum+i;
		count++;
	}
		printf("%d ",sum/a);
}