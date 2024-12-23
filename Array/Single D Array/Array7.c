#include<stdio.h>
void main(){

    int n[100],size;

    printf("Enter the size of an array :");
    scanf("%d",&size); // 3

    for(int i=0;i<size;i++){

        printf("Enter [%d] index :",i+1);
        scanf("%d",&n[i]);

    }

    printf("\n\nThe entered array is : \n");

    for(int i=0;i<size;i++){
        printf("%d\t",n[i]);
    }

}