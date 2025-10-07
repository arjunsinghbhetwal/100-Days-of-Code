#include <stdio.h>

int main() {

    float num1,num2,num3; //creates variables

    printf("Enter first number: "); //print statement
    scanf("%f", &num1);             //inputs from user

    printf("Enter second number: "); //print statement
    scanf("%f", &num2);              //inputs from user

    printf("Enter third number: ");  //print statement
    scanf("%f", &num3);              //inputs from user

    if (num1 > num2 && num1 > num3) //conditional statement
    {
        printf("first is greater\n");
    }
    else if(num2 > num1 && num2 > num3) //conditional statement
    {
        printf("Second is greatest\n");
    }
    else if(num3 > num1 && num3 > num2) //conditional statement
    {
        printf("Third is greatest\n");
    }
    else {                             //conditional statement
        printf("Invalid! input\n"); 
    }

    return 0;

}