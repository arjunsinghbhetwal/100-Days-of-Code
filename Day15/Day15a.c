#include <stdio.h>

int main() {

    int i,n,fact=1; //creates variable.

    printf("Enter no. for Factorial: "); //printf statement.
       
    //checks input from user valid or not.
    if(scanf("%d",&num) != 1)
    {
        printf("Invalid! Input");
        return 1;
    }                        


    for(i=1; i<=n; i++)
    {
        fact = fact*i;
    }

    //print statement.
    printf("Factorial of %d is: %d\n", n,fact);

    return 0; //indicates successful termination.
}