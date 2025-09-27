#include <stdio.h>

int main() {

    int num1,num2;                  //creates variables

    printf("Enter first number: "); //print statements
    scanf("%d",&num1);              //inputs from user

    printf("Enter second number: ");
    scanf("%d",&num2);

    num1=num1-num2; //modifies value to variable as difference 
    num2=num1+num2; //reassign value to variable
    num1=num2-num1; //reassign value to variable

    printf("Values after swapping:\n");
    printf("First number: %d\n", num1);  //print statements
    printf("Second number: %d\n", num2);

    return 0;

}