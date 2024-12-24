#include<stdio.h>
void main(){

    int a[2][3];
    int b[2][3];


    for(int i=0;i<2;i++){

        for(int j=0;j<3;j++){
            printf("Enter element at position [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }


    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            b[i][j] = a[i][j];
        }
        
    }

    printf("\n Print B Array \n");


    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }



}