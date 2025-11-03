#include <stdio.h>

int main() {

    int n,prod=1,num1=2; //creates variables.

    printf("Enter no. of terms: "); //print statement.
    
    //checks input from user valid or not.
    if(scanf("%d",&num) != 1)
    {
        printf("Invalid! Input");
        return 1;
    }                        


    //conditional statement.
    for(int i=1;i<=n;i++)
    {
        prod = prod * num1;

        num1 = num1 + 2;

    }

    //print statement.
    printf("The Product of %d terms: %d\n", n,prod); 

    return 0; //indicates successful termination.
}