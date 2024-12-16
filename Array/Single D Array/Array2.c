#include<stdio.h>
void main(){

    // int n[5] = {12,13,14,15,16};

    // // printf("%d",n[0]);

    // for(int i=0;i<5;i++){

    //     printf("%d\n",n[i]);
    // }

    int n[4];
    
    for(int i=0;i<4;i++){
        printf("Enter [%d] number ",i+1);
        scanf("%d",&n[i]);
    }

    printf("\nPrint all elemets : \n\n");

    for(int i=0;i<4;i++){
        printf("%d\n",n[i]);
    }



}