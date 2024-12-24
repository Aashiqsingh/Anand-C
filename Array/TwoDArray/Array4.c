#include<stdio.h>
#define SIZE 3
void main(){

    int a[SIZE][SIZE],b[SIZE][SIZE];

    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++){
            printf("Enter element a[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("Enter element b[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("Matrix of A elemet \n");

    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nMatrix of B elemets \n");

    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }


}