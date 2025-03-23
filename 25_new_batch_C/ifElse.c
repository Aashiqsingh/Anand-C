#include<stdio.h>
void main()
{

    int a,b,c;

    printf("Enter first number :-");
    scanf("%d",&a);
    printf("Enter second number :-");
    scanf("%d",&b);
    printf("Enter third number :-");
    scanf("%d",&c);

    if(a > 35 && b > 35 && c > 35)
    {
        printf("%d",a+b+c);
    }
    else if(a > 35 && b > 35)
    {
        printf("%d",a+b);
    }
    else if(a > 35 && c > 35)
    {
        printf("%d",a+c);
    }
    else if(b > 35 && c > 35){
        printf("%d",b+c);
    }
    else if(a > 35)
    {
        printf("%d",a);
    }
    else if(b > 35)
    {
        printf("%d",b);
    }
    else if(c > 35){
        printf("%d",c);
    }


}