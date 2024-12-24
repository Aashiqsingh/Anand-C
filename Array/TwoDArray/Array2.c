#include<stdio.h>
void main(){

    int arr[3][4];

    for(int i=0;i<3;i++){

        for(int j=0;j<4;j++){

            printf("Enter [%d] index no :",j);
            scanf("%d",&arr[i][j]);
        }
        
    }


    printf("\nprint 2D array is :\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }



}


/*
    arr[3][4]

    arr[0][0]
    arr[0][1]
    arr[0][2]
    arr[0][3]

    arr[1][0]
    arr[1][1]
    arr[1][2]
    arr[1][3]

    arr[2][0]
    arr[2][1]
    arr[2][2]
    arr[2][3]



 */

