#include <stdio.h>

int main() {
    
    short Month; //creates a variable shor(-32768-32767).

    printf("Enter your month number 1-12: "); //Print statement.

    //inputs from user and checks whether the input is valid or not.
    if(scanf("%hd", &Month) != 1){
        printf("Invalid! Input, Enter month number 1-12.");
    }

    //switch-case block to check the value of Month.
    switch(Month) {

        case 1:
        printf("Month:January\nDays:31\n"); //If Input is 1, returns print statement.
        break;

        case 2:
        printf("Month:Feburary\nDays:28\n"); //If Input is 2, returns print statement.
        break;

        case 3:
        printf("Month:March\nDays:31\n"); //If Input is 3, returns print statement.
        break;

        case 4:
        printf("Month:April\nDays:30\n"); //If Input is 4, returns print statement.
        break;

        case 5:
        printf("Month:May\nDays:31\n"); //If Input is 5, returns print statement.
        break;

        case 6:
        printf("Month:June\nDays:30\n"); //If Input is 6, returns print statement.
        break;

        case 7:
        printf("Month:July\nDays:31\n"); //If Input is 7, returns print statement.
        break;

        case 8:
        printf("Month:August\nDays:31\n"); //If Input is 8, returns print statement.
        break;

        case 9:
        printf("Month:September\nDays:30\n"); //If Input is 9, returns print statement.
        break;

        case 10:
        printf("Month:October\nDays:31\n"); //If Input is 10, returns print statement.
        break;

        case 11:
        printf("Month:November\nDays:30\n"); //If Input is 11, returns print statement.
        break;

        case 12:
        printf("Month:December\nDays:31\n"); //If Input is 12, returns print statement.
        break;

        default:
        //This block runs if user input is not from 1-7.
        printf("Invlaid! Input,Enter the month number 1-12.\n");
    }

    return 0; //indicates successful program termination.
}