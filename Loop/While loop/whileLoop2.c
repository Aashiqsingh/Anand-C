#include<stdio.h>
#include<conio.h>

void main(){

    int num,rem,sum=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    // for(;num>0;)

    while(num>0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    printf("Total Sum of numbers = %d",sum);
}