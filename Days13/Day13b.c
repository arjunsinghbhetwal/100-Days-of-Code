#include <stdio.h>

int main() {

    short num; //creates variable shot(-32768 to 32767).

    printf("Enter your number: "); //print statement.
    scanf("%hd",&num);             //inputs from user and save it into the variable.

    //conditional statement.
    for(int i=1;i<=num;i++)
    {
        printf("%hd\n", i); //writes counting till the num value.
    }
    

    return 0; //indicates successful termination.
}