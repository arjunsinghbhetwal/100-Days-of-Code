#include <stdio.h>

int main() {

    int num,digit,rev=0; //creates variables.

    printf("Enter your number: "); //print statement.

    //checks whether the input is valid or not.
    if(scanf("%d",&num) != 1)
    {
        printf("Invalid! Input\n");
        return 1;
    }

    //conditional statement.
    for(; num != 0; num=num/10)
    {
        digit = num % 10;            //stores the last digit num.

        rev = (rev * 10) + digit;    //stores the reverse of num.
    }
 
    //conditional statement.

    //Statement executed if the number is pallindrome.
    if(num = rev)
    {
        printf("The number %d is pallindrome\n", num);
    }

    //Statement executed if the number is not a pallindrome.
    else{
        printf("The number is not a pallindrome\n");
    }

    return 0; //indicates successful termination.
}