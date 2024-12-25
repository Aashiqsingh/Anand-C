#include<stdio.h>
void main(){


    int a[10][10];
    int row,col;

    printf("Enter the row :-");
    scanf("%d",&row);
    printf("Enter the column :-");
    scanf("%d",&col);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Enter the element at [%d][%d] :- ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Matrix of elemet \n");

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


}