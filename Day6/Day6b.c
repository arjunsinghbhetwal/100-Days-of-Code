#include <stdio.h>

int main() {

    float num1;  //creates a variable

    printf("Enter your number: "); //print statement
    if(scanf("%f", &num1) != 1)    //checks whether the input is valid or not
    {
        printf("Invalid Input\n"); //print statment for invlaid input
        return 1;                  //stops code execution if condition is false
    }

    else if(num1 < 0)
    {
        printf("Number entered is negative\n"); //print statement for negative input
    }

    else if(num1 > 0)
    {
        printf("Number entered is positive\n"); //print statement for positive input
    }

    else {
        printf("Number entered is zero\n"); //print statemnt for zero as an input
    }

    return 0;


}