#include<stdio.h>

int registerPage()
{
    long int mobile;
    int pin;
    char userName[20];
    printf("\nUser register\n");
    printf("Enter mobile no:-");
    scanf("%ld",&mobile);
    fflush(stdin);
    printf("Enter your userName :-");
    gets(userName);
    fflush(stdin);
    printf("Enter pin :-");
    scanf("%d",&pin);

    printf("\n\nUser register successfully...\n");
    printf("\nUser Details:\n");
    printf("UserName: %s\n",userName);
    printf("Mobile no: %ld\n",mobile);
    printf("Pin: %d\n",pin);
    return pin;
 

}


int login(int pin)
{
    long int mobile;
    int upin;
    int flag = 0;

    printf("\n\nUser Login...\n");

    printf("Enter mobile number :-");
    scanf("%ld",&mobile);
    printf("Enter pin :-");
    scanf("%d",&upin);

    if(pin == upin)
    {
        flag = 1;
    }
    else{
        flag = 0;
    }

    return flag;
}

int ticket()
{
    char name[20];
    long int num;
    int age;

    printf("\n\nBook your ticket...\n");
    printf("Enter train number :-");
    scanf("%ld",&num);
    fflush(stdin);
    printf("Enter passenger name :-");
    gets(name);
    printf("Enter age of passenger :-");
    scanf("%d",&age);

    if(age > 18)
    {
        printf("\n\nYou have to pay full amount of passenger..\n");
        printf("Your ticket confirmed successfully..\n");
        printf("passenger name: %s\n",name);
        printf("Train number: %ld\n",num);
        printf("Age: %d\n",age);
    }
    else{
        printf("You have to pay half amount of passenger..\n");
        printf("Your ticket confirmed successfully..\n");
        printf("passenger name: %s\n",name);
        printf("Train number: %ld\n",num);
        printf("Age: %d\n",age);
    }
}


void main()
{
    int pin;
    int x;
    pin = registerPage();
    printf("Your Pin is main function : %d\n",pin);

    x = login(pin);

    if(x == 1)
    {
        printf("\nLogin Successfully...\n");
        ticket();

    }
    else{
        printf("\nLogin Failed...\n");
    }

}