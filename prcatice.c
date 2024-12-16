#include<stdio.h>
#include<conio.h>
void main(){
    int a,b,c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);
    printf("Enter third number :");
    scanf("%d",&c);

    if(a > 35 && b > 35 && c > 35){
        printf("Addition of three number : %d",a+b+c);
    }
    else if(a > 35 && b > 35){
        printf("Addition of first two number : %d",a+b);
    }
    else if(b > 35 && c > 35){
        printf("Addition of second two number : %d",b+c);
    }
    else if(c > 35 && a > 35){
        printf("Addition of third two number : %d",c+a);
    }
    else if(a > 35){
        printf("First number is greater than 35");
    }
    else if(b > 35){
        printf("Second number is greater than 35");
    }
    else if(c > 35){
        printf("Third number is greater than 35");
    }
    else{
        printf("0000");
    }

}