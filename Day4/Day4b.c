#include <stdio.h>

int main() {

    int num1,S;                                               //creates variable

    printf("Enter natural number till whose sum you want: "); //print statement
    scanf("%d",&num1);                                        //inputs from user

    S=num1*(num1+1)/2;                                       //formula
 
    printf("Sum of natural numbers is: %d\n", S);

    return 0;

}