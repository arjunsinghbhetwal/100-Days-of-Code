#include <stdio.h>

int main() {

    int num,rev=0,digits; //creates variable.

    printf("Enter number to be reversed: "); //print statement.
    
    //checks input from user valid or not.
    if(scanf("%d",&num) != 1)
    {
        printf("Invalid! Input");
        return 1;
    }                        

    //conditional statement.
    for(; num != 0; num = num/10)
    {
        digits=num%10;                 //stores the last digit num.

        rev=(rev * 10) + digits;       //stores the reverse of num.

    }

    //print statement.
    printf("Reverse of %d is: %d\n", num,rev);

    
    return 0; //indicates successful termination.
}