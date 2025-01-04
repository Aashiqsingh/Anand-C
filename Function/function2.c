// without returnType with argument 

#include<stdio.h>

void prime(int x ,int y){

    int flag = 0;
    for(int i=2;i<x;i++){
        if(x%i==0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("%d is prime number.",x);
    }
    else{
        printf("%d is not prime number.",x);
    }
}
void main(){


    int n;
    printf("Enter the number :"); // 5
    scanf("%d",&n);


    prime(n);

}