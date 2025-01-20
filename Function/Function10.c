#include<stdio.h>

void MatrixAddition(int a[3][3],int b[3][3])
{
   
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter a[%d][%d] element :",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("Enter b[%d][%d] element :",i,j);
            scanf("%d",&b[i][j]);
        }
    }

    printf("\nMatrix A:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("\n Addition of Two Matrixs \n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}

void main(){

    int a[3][3] , b[3][3];
    MatrixAddition(a,b);


}