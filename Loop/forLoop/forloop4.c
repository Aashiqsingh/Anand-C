#include<stdio.h>
void main(){


    int n;

    printf("Enter row number :");
    scanf("%d",&n);



    // ulta triangle
     for(int i=1;i<=n;i++){

        for(int j=n;j>=i;j--){
            printf("*");
        }
        printf("\n");
    }









    

    
    // for(int i=1;i<=n;i++){

    //     for(int j=1;j<=i;j++){

    //         printf("*");
    //     }
    //     printf("\n");
    // }

















    // int n;
    // printf("Enter the number  :");
    // scanf("%d",&n);


    // square
    // for(int i=1;i<=n;i++){

    //     for(int j=1;j<=n;j++){

    //         printf("%c",j+96);
    //     }
    //     printf("\n");
    // }
}