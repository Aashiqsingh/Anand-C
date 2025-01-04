#include<stdio.h>
void arts(int per , char name[20]){

    if(per > 50){
        printf("%s your addmission confirm in arts strame , congrats!!!",name);
    }
    else{
        printf("Sorry %s you are not eligible for any stream",name);
    }
}
void commerce(int per , char name[20]){

    if(per > 70)
    {
        printf("%s your addmission confirm in commerce strame , congrats!!!",name);
    }
    else{
        arts(per,name);
    }
}
void science(int per , char name[20]){

    if(per > 90){
        printf("%s your addmission confirm in science strame , congrats!!!",name);
    }
    else{
        commerce(per,name);
    }
}





void main(){

    int percentage;
    printf("Enter the percentage :-");
    scanf("%d",&percentage);

    science(percentage,"rahul");
}