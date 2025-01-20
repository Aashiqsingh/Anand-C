#include<stdio.h>

int orderZomato(){

    int amount = 345;
    int orderId = 121;

    printf("Your order Id is: %d",orderId);
    return amount;
}

int paymentZomato(int amount){

    int price = amount;
    int paymentId = 131;

    printf("\n\n Your Payment Id is: %d",paymentId);
    return price;
}

void main()
{
    int x = orderZomato();
    printf("\nOrder is succeffully\n Amount is : %d",x);

    int y = paymentZomato(x);
    printf("\nPayment is succefully \nTotal price is :%d",y);
    
}






void main(){
    int arr[5] = {55,44,22,11,99};
    // char str[5] = {'a','b',8};
} 