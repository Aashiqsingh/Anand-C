#include<stdio.h>
void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int a = 1;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++)
        {
            printf("%d ",a++);
        }
        printf("\n");
    }





    // for(int i=1;i<=n;i++){

    //     for(int j=1;j<=n;j++)
    //     {
    //         if(i==j || i+j==n+1)
    //         {
    //             printf("* ");
    //         }
    //         else{
    //             printf("  ");
    //         }
    //     }
    //     printf("\n");
    // }
}