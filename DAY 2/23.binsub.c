#include <stdio.h>
#include <math.h>
int main()
{
            int numa[8]={0},numb[8]={0},diff[8]={0},i;
            printf("\nEnter first number: ");
            for(i = 0; i<8; i++){
                        scanf("%d",&numa[i]);
            }
            printf("\nEnter second number: ");
            for(i = 0; i<8; i++){
                        scanf("%d",&numb[i]);
            }
            for(i = 7; i >= 0; i--){
                        diff[i] = numa[i] - numb[i];
                        if(diff[i] < 0){
                        numa[i-1] = numa[i-1] - 1;
                        }
                        diff[i] = fabs(diff[i]%2);
            }
            printf("\nDifference is: ");
            for(i = 0; i<8; i++){
                        printf("%d",diff[i]);
            }
        }
