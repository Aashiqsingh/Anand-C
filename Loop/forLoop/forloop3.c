#include<stdio.h>
#include<conio.h>
void main(){

    

    // for(int i=0;i<n;i++){
    //     printf("*\n");
    // }


    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++){

    //         printf(" *");
    //     }
    //     printf("\n");
    // }
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    int a = 1;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){

            printf(" %d",a++);
        }
        printf("\n");
    }

}