#include<stdio.h>
void main(){

    int n;
    printf("Enter the number  :");
    scanf("%d",&n);

    if(n < 0)
    {
        n = 0 - n;
        printf("%d",n);
    }
    else{
        printf("%d",n);
    }
}