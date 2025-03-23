#include<stdio.h>
// without return without argumnet
// without return with argument
// with return without argumnet
// with return with argument


// without return without argumnet


// void isOdd()
// {
//     int num;
//     printf("Enter a number :-");
//     scanf("%d", &num);

//     if(num % 2 == 1)
//     {
//         printf("%d is odd.\n", num);
//     }
//     else{
//         printf("%d is even.\n", num);
//     }
// }


// without return with argument

// void isOdd(int num)
// {
//     if(num % 2 == 1)
//     {
//         printf("%d is odd.\n", num);
//     }
//     else{
//         printf("%d is even.\n", num);
//     }
// }



// with return without argumnet

// float SimpleInt()
// {
//     float p = 10000;
//     float r = 2.0;
//     float t = 2;

//     float si;

//     si = (p * r * t) / 100;

//     return si;

// }


// with return with argument

float simpleInt(int p,float r,int t)
{
    float si;

    si = (p * r * t) / 100;

    return si;
}



void main()
{
    float ans;
    // isOdd();
    // isOdd(15);

    // ans = SimpleInt();

    // printf("%f",ans);

    ans = simpleInt(10000,3.5,3);
    printf("%f",ans);
}