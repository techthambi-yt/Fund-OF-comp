#include<stdio.h>
int main()
{
	int temp,a,b;
	printf("enter a number");
	scanf("%d",&a);
	temp=a;
	while(a!=0)  
   {  
       a=a/10;  
       b++;  
   }  
printf("%d has %d digits",temp,b);
}
