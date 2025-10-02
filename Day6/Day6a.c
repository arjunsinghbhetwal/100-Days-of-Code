#include <stdio.h>

int main() {

    int num1;     //creates variable

    printf("Enter your number: "); //print statement
    if (scanf("%d", &num1) != 1)
    {
        printf("Invalid input!, Try integer values\n"); //checks whether input is integer or not
        return 1;
    }

    if(num1%2 == 0)
    {
        printf("Your number is even: %d\n",  num1); //print statement executed if condition is true
    }

    else{
        printf("Your number is odd: %d\n", num1); //rpint statement executed if condition is false
    }

    return 0;

}