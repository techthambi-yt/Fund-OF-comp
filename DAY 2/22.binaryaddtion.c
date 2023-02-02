#include <stdio.h> 
int main()
{
 
    int a, b;
    int i=0,j=0,sum[20];
 
    printf("num1=");
    scanf("%d", &a);
    printf("num2=");
    scanf("%d", &b);
    while (a!=0||b!=0)
    {
        sum[i]=(a%10+b%10+j)%2;
        j=(a%10+b%10+j)/2;
        a=a/10;        
        b=b/10;
        i++;        
    }
    if(j!=0)       
        sum[i]=j;
        i++; 
    printf("Sum=");
    while (i>0)
    {
    	 i--;
        printf("%d",sum[i]);
       
    }
}