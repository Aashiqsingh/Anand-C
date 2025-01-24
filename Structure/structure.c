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

    struct student s[2];

    

    s[1].roll = 1;
    strcpy(s[1].name,"Anand");
    s[1].std = 12;

    s[2].roll = 2;
    strcpy(s[2].name,"Deepak");
    s[2].std = 10;


    for(int i=1;i<=2;i++)
    {
        printf("%d %s %d\n",s[i].roll,s[i].name,s[i].std);
    }


}