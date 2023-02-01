#include<stdio.h>
int main()
{
	int a,b,c,temp,arm=0;
	printf("enter a");
	scanf("%d",&a);
	temp=a;
	while(temp>0)  
    {    
     	b=temp%10;    
		arm+=b*b*b;    
		temp=temp/10;    
   }
   printf("%d",arm);
}