#include<stdio.h>
void main()
{

    int sec,hour,min;
    printf("ENter seconds :-"); // 4000
    scanf("%d", &sec);

    hour = sec / 3600;   // 1
    sec = sec % 3600;    // 400
    min = sec / 60;     // 6
    sec = sec % 60;


    printf("Hours : min : sec\n");
    printf("%d : %d : %d",hour,min,sec);

}

days = 420
year = 1
month =  1
week = 3
days = 4