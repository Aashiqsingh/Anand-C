#include<stdio.h>
void main(){

    long int num,rem,EvenSum=0,OddSum=0;
    printf("Enter a number: ");  // 123456
    scanf("%ld",&num);


    for(;num>0;){
        rem = num % 10;

        if(rem % 2 == 0){
            EvenSum = EvenSum + rem;
        }
        else{
            OddSum = OddSum + rem;
        }

        num = num / 10;
    }


    printf("\nSum of Even number : %d",EvenSum);
    printf("\nSum of Odd number : %d",OddSum);
}
