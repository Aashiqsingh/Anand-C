#include<stdio.h>

// void demo()
// {
//     printf("This is a demo function\n");
// }

void EvenOdd()
{
    int n;
    printf("Enter a number :-");
    scanf("%d",&n);

    if(n%2==0)
    {
        printf("%d is even number.",n);
    }      
    else{
        printf("%d is odd number.",n);
    }
}


void main(){

        // without argument without returntype 
    // demo();
    // demo();
    // demo();

    // with argument without returntype
    EvenOdd();

}