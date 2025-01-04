#include<stdio.h>

void test(int roll,char name[10],int std){

    printf("%d\t%s\t%d",roll,name,std);
}

void main()
{
    int rollNo,class;
    char name[10];

    printf("Enter roll number :");
    scanf("%d",&rollNo);
    printf("Enter student's name :");
    scanf("%s",name);
    printf("Enter class :");
    scanf("%d",&class);

    // test(1,"ram",12);

    test(rollNo,name,class);
}