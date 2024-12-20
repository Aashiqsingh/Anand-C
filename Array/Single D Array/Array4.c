#include<stdio.h>
void main(){

    int n[5];

    for(int i=0;i<5;i++){

        printf("Enter [%d] index is :",i+1);
        scanf("%d",&n[i]);
    }

    int max = n[0];

    for(int i=1;i<5;i++){
        if(n[i] > max)
        {
            max = n[i];
        }
    }

    printf("Max value if : %d",max);

}