#include <stdio.h>

int main() {

    int num1,num2,C;                 //creates variables

    printf("Enter first number: ");  //print statement
    scanf("%d",&num1);               //inputs from user

    printf("Enter second number: ");
    scanf("%d",&num2);

    C=num1-num2; //stores difference
    num1=num1-C; //restores num1 value
    num2=num2+C; //restores num2 value

    printf("Values after swapping:\n");
    printf("First number: %d\n", num1);     //Print statements
    printf("Second number: %d\n", num2);

    return 0;

}