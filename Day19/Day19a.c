#include <stdio.h>

int main() {

    int num1,digits,sum=0;  //creates variables.

    printf("Enter your number: ");  //print statement.

    //checks whether the input is valid or not.
    if(scanf("%d",&num1) != 1)
    {
        printf("Invaid! input\n");
        return 1;
    }

    //conditional statement.
    for(; num1 != 0; num1=num1/10)
    {
        digits = num1 % 10;

        sum = sum + digits;
    }

    //print statement.
    printf("The sum of the digits: %d\n", sum);
    

    return 0; //indicates successful termination.
}