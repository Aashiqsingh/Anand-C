#include<stdio.h>
void main()
{

    int a[10][10],b[10][10],sum[10][10];
    int row,col;

    printf("Enter the row :");
    scanf("%d",&row);
    printf("Enter the column :");
    scanf("%d",&col);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the elements of a[%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the elements of a[%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }


    for(int i=0;i<row;i++){

        for(int j=0;j<col;j++){

            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Matrix of A elemet \n");

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix of B elemet \n");

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of A and B Matrix \n");

    for(int i=0;i<row;i++){

        for(int j=0;j<col;j++){
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

}