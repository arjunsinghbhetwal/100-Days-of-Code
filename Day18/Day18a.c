#include <stdio.h>

int main() {
    
    int num1,i; //creates variable.

    printf("Enter number: "); //print statement.

    //checks whether the input os valid or not.
    if(scanf("%d",&num1) != 1)
    {
        printf("Invalid! input\n");
        return 1;
    }

    //conditional statement.
    for(i = 1; i <= num1; i++)
    {
        if( num1 % i == 0 )
        {
            printf("%d\n", i); //returns the factors of num1.
        }
    }


    return 0; //indicates successful termination.
}