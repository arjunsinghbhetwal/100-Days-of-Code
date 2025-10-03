#include <stdio.h>

int main() {

    int year;                     //creates variables

    printf("Enter year: ");       //print statement
    if(scanf("%d", &year) != 1)   //checks whether the input is valid or not
    {
        printf("Invalid! input"); //print statement for invalid input
        return 1;
    }
    else if (year % 400 == 0)     
    {
        printf("The year %d is a leap year\n", year); //print statement
    }
    else if (year % 100 == 0)
    {
        printf("The year %d is not a leap year\n", year); //print statement
    }
    else if (year % 4 == 0)
    {
        printf("The year %d is a leap year\n", year); //print statement
    }
    else{
        printf("The year %d not a leap year\n", year); //print statement
    }

    return 0;
    

}