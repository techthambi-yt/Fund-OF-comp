#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,temp,r;
    float bin=0;
    printf("enter the octal number");
    scanf("%d",&a);
    temp=a;
    for(int i=0;temp!=0;i++)
 {
        r=temp%10;
        bin+=r*pow(2,i);
        printf(" %f",pow(8,i));
        temp=temp/10;
}
    printf("\t %f",bin);
}