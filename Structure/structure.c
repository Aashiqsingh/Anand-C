#include<stdio.h>
#include<string.h>
// struct keyword is used to make structure declarations  

// structure is a collection of diffrent dataTypes value

struct student{
    int roll;
    char name[20];
    int std;
};
void main()
{

    // 2 students : roll , name , std
    // int s1Roll = 1;
    // char s1Name[20] = "Anand";
    // int s1Std = 10;

    // int s2Roll = 2;
    // char s2Name[20] = "Deepak";
    // int s2Std = 12;

    // printf("%d %s %d\n",s1Roll,s1Name,s1Std);
    // printf("%d %s %d\n",s2Roll,s2Name,s2Std);

    struct student s1;
    struct  student s2;
    

    s1.roll = 1;
    strcpy(s1.name,"Anand");
    s1.std = 12;

    s2.roll = 2;
    strcpy(s2.name,"Deepak");
    s2.std = 10;


    printf("%d %s %d\n",s1.roll,s1.name,s1.std);
    printf("%d %s %d\n",s2.roll,s2.name,s2.std);


}