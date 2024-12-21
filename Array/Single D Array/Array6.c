#include<stdio.h>
void main(){


    int n[5],search,flag;

    for(int i=0;i<5;i++){
        printf("Enter [%d] index : ",i+1);
        scanf("%d",&n[i]);
    }

    printf("Enter the value which u want to find ?");
    scanf("%d",&search); // 56 78 45 34 22             : 40

    for(int i=0;i<5;i++){
        if(n[i] == search)
        {
            printf("%d is found at %d index ",n[i],i);
            flag = 0;
            break;
        }
        else
        flag = 1;
    }

    if(flag == 1)
    {
        printf("%d is not found in array",search);
    }

}