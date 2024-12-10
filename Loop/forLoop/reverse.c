#include<stdio.h>
void main(){

    int n,rem,rev=0,flag;
    printf("Enter the number :");
    scanf("%d",&n);

    flag = n;

    for(;n>0;){

        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }


    // printf("Reverse number : %d",rev);


    if(rev == flag)
    {
        printf("Pallindrome number");
    }
    else{
        printf("Not a pallindrome number");
    }
}