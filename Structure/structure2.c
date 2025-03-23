#include<stdio.h>
#include<string.h>
#define SIZE 3

struct student{
    int roll;
    char name[20];
    int std;
};

void main()
{
    struct student s[SIZE];

    for(int i=0;i<SIZE;i++)
    {
        printf("Enter roll no:");
        scanf("%d",&s[i].roll);
        fflush(stdin);
        printf("Enter name:");
        scanf("%s",s[i].name);
        printf("Enter standard:");
        scanf("%d",&s[i].std);
    }

    printf("\n Roll \t Name \t Std");

    for(int i=0;i<SIZE;i++){
        printf("\n%d \t %s \t %d",s[i].roll,s[i].name,s[i].std);
    }
}