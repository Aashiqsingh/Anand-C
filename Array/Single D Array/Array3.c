#include<stdio.h>

void main(){

    int n[5];
    int sum = 0;

    for(int i=0;i<5;i++){
        printf("Enter the number: ");
        scanf("%d",&n[i]);
    }

    for(int i=0;i<5;i++){
        printf(" %d \t",n[i]);
    }


    // Sum of all emenets 

    for (int i = 0; i < 5; i++)
    {
        sum = sum + n[i];
    }

    printf("Sum of all emenets is : %d",sum);
    
    
}