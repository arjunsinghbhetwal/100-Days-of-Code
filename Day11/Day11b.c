#include <stdio.h>

int main() {

    float sellp,costp,prof,profp,loss; //creates variables Unsigned int(0-4294967295).

    printf("Enter Cost price and Selling price: "); //print statement.

    //checks whether the input is valid or not.
    if(scanf("%f%f",&costp,&sellp) != 2)
    {
        printf("Invalid! Input");
        return 1;
    }
    //formula for profit.
    prof=sellp-costp;

    //if profit > 0 returns profit and profit percentage.
    if(prof > 0)
    {
        printf("Profit:%.2f\n", prof);
        printf("Profit percentage:%.2f\n", (prof/costp)*100);
    }
    //if profit < 0 returns loss and loss percentage.
    else if(prof < 0)
    {
        float loss=-prof;
        printf("Loss:%.2f\n", loss);
        printf("Loss Percentage:%.2f\n", (loss/costp)*100);
    }
    //if profit = 0 returns print statement.
    else{
        printf("No Loss No Profit");
    }

    return 0; //indicates successful termination
}