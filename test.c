#include<stdio.h>

int main(){
    int a = 4;
    do{

        printf("%2.2d",a+2);
        a = a - 1;
    }while(a != 1);
    return 0;

}