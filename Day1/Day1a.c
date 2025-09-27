#include <stdio.h>

int main(){

    float num1, num2, Sum;

    printf("Enter first number: "); //inputs first number from user
    scanf("%f", &num1);

    printf("Enter second number: "); //Input second number from user
    scanf("%f", &num2);

    Sum = num1+num2 ; //Adds numbers

    printf("The sum is %.2f\n", Sum); //Prints the sum

    return 0;

}