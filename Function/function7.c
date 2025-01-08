// #include<stdio.h>


// char* demo()
// {
//     char name[10] = "hello";

//     return name; 
// }
// void main(){

//     char* ch;

//     ch = demo();
//     printf("%s", ch);
    
// }


#include<stdio.h>

char* demo() {
    static char ch[10] = "Rahul";  // Static array to persist after function exits
    return ch;                     // Return a pointer to the array
}

void main() {
    char* ch;
    ch = demo();                   // Get the pointer to the string
    printf("%s ", ch);            // Print the entire string ("hello")
}