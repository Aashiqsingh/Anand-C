#include<stdio.h>
void main(){

    int n[5],temp;

    for(int i=0;i<5;i++){
        printf("Enter [%d] index : ",i+1);
        scanf("%d",&n[i]);
    }

    printf("Before sorting data : \n");
    for(int i=0;i<5;i++){
        printf("%d \t",n[i]);
    }

    printf("\n\nAfter sorting data : \n");

    for(int i=0;i<5;i++){

        for(int j=i+1;j<5;j++){

            if(n[i] > n[j])
            {
                temp = n[i];
                n[i] = n[j];
                n[j] = temp;
            }
        }
    }

    for(int i=0;i<5;i++){
        printf("%d \t",n[i]);
    }



}