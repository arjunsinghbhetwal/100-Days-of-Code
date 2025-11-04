#include <stdio.h>
#include <stdbool.h>

int main() {

    int num,i; //creates variable.
    bool isPrime = true; //bool used for checking true false condition.

    printf("Enter your number: "); //print statement.

    //checks whether the input is valid or not.
    if(scanf("%d",&num) != 1)
    {
        printf("Invalid! Input\n");
        return 1;
    }

    // 1 and below are not Prime
    if(num <= 1){
        isPrime = false;
    } 

    else{
        for(i = 2; i * i <= num; i++)
        {
            if (num % i == 0){
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0; //indicates successful termination.
}