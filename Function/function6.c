#include<stdio.h>
// with return without argument 

int add()
{
    int a = 17;
    int b = 19;

    return a + b;
}

int sub(){
    int a = 17;
    int b = 19;

    return a - b;
}

int mul(){
    int a = 17;
    int b = 19;

    return a * b;
}

int div(){
    int a = 17;
    int b = 19;

    return a / b;
}

void main(){


    

    int choice,flag;

    printf("1 for Add");
    printf("\n2 for Subtract");
    printf("\n3 for Multiply");
    printf("\n4 for Divide");
    printf("\nEnter your choice :-");
    scanf("%d",&choice);

    switch(choice){
        case 1:
            flag = add();
            break;
        case 2:
            flag = sub();
            break;
            
        case 3:
            flag = mul();
            break;

        case 4:
            flag = div();
            break; 
    }

    printf("%d",flag);

}