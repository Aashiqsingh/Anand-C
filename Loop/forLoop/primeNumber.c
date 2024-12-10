#include<stdio.h>
void main(){

    int num,i,flag = 0;
    printf("Enter the number :");
    scanf("%d",&num);

    for(i=2;i<num;i++){   // 17
        if(num%i==0){
            flag = 1;
        }
    }

    if(flag == 0)
    {
        printf("%d is a prime number",num);
    }
    else{
        printf("%d is not a prime number",num);
    }
}