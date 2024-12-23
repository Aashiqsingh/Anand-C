#include<stdio.h>
void main(){

    int a[3][3] = {{56,67,87},{45,65,77},{33,44,55}};


    // printf("%d",a[1][2]);

    for(int i=0;i<3;i++){

        for(int j=0;j<3;j++){

            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


}