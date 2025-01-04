#include<stdio.h>

void science(int per , char name[20]){
    printf("%s your admisiion confirm in science stream with per %d",name,per);
}

void commerce(int per , char name[20]){
    printf("%s your admisiion confirm in commerce stream with per %d",name,per);
}

void art(int per , char name[20]){
    printf("%s your admisiion confirm in art stream with per %d",name,per);
}

void main(){
    int percentage;
    char ch[20];
    printf("Enter the percentage :-");
    scanf("%d",&percentage);
    printf("Enter your name :-");
    scanf("%s",&ch);

    if(percentage > 90)
    {
        science(percentage,ch);
    }
    else if(percentage > 70){
        commerce(percentage,ch);
    }
    else if(percentage > 50){
        art(percentage,"tejas");
    }
    else{
        printf("Sorry %s you are not eligible for any stream",ch);
    }
}