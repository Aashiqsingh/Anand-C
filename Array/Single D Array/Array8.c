#include<stdio.h>
void main(){

    char ch[5],find;
    int flag = 0;

    for(int i=0;i<5;i++){

        printf("Enter [%d] character :",i+1);
        scanf("%s",&ch[i]);
    }

    printf("Enter to find string :");
    scanf("%s",&find);

    for(int i=0;i<5;i++){
        if(ch[i] == find){
            flag = 0;
            printf("Found the [%c] character at [%d] index :",find,i);
            break;
        }
        else 
        flag = 1;
    }

    if(flag == 1){
        printf("Not found caracter...");
    }










    // printf("\n\nPrint all elements \n");

    // for(int i=0;i<5;i++){
    //     printf("%c\t",ch[i]);
    // }

}