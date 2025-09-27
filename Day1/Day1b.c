#include <stdio.h>

int main() {

    float num1,num2,Sum,Diff,Pro,Quo; //creates variables 

    printf("Enter first number: "); //inputs from user
    scanf("%f", &num1);

    printf("Enter second number: "); //inputs froms user
    scanf("%f", &num2);

    Sum=num1+num2; //Provides Sum

    printf("Sum is: %.2f\n", Sum);

    Diff=num1-num2; //Provides Difference

    printf("Difference is: %.2f\n", Diff);

    Pro=num1*num2; //Provides Multiple

    printf("Product is: %.2f\n", Pro);

    Quo=num1/num2; //Provides Quotient

    printf("Quotient is: %.2f\n", Quo);

    return 0;

}