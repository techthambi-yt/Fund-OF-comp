#include<stdio.h>
int main()
{
	int a,b,c,d=0;
	printf("enter the last number in fiboseries:");
	scanf("%d",&a);
	b=0;
	c=1;
	printf("%d %d ",b,c);
	while(d<a)
	{
		d=b+c;
		if (d<=a)
			printf("%d ",d);
		b=c;
		c=d;
	}
}