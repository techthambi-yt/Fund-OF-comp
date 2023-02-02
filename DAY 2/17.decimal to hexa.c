#include <stdio.h>
int main()
{
    int  num, a, b;
    int i, j = 0;
    char opher[100];
    printf("Enter decimal number: ");
    scanf("%d", &num);
    a = num;
    while (a!= 0)
    {
        b=a%16;
        if (b<10)
            opher[j++]=48+b;
        else
            opher[j++]=55+b;
        a=a/16;
    }
    for(i=j;i>=0;i--)
            printf("%c",opher[i]);
}