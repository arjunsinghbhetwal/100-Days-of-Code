#include <stdio.h>

int main() {

    unsigned short late_days,fine; //creates variable.

    printf("Enter late days: "); //print statement.

    //checks whether the input is valid.
    if(scanf("%hd",&late_days) != 1)
    {
        printf("Invalid! Input");
        return 1;
    }

    //conditional statement.
    if(late_days == 0)
    {
        printf("No fine\n");
    }

    //First 5 Days late: $2/Day.
    else if(late_days <= 5)
    {
        fine = late_days * 2;
        printf("late %hd days fine: %hd\n", late_days,fine);
    }

    //Next 10 Days late: $4/Day.
    else if(late_days <= 10)
    {
        fine = (5 * 2) + ((late_days-5) * 4);
        printf("late %hd days fine: %hd\n", late_days,fine);
    }

    //Next 20 Days late: $6/Day.
    else if(late_days <= 30)
    {
        fine= (5 * 6) + ((late_days-10) * 6);
        printf("late %hd days fine: %hd\n", late_days,fine);
    }

    //More than 30 Days.
    else
    {
        printf("More than 30 days: Membership Cancelled\n");
    }

    return 0; //indicates successful termination.
}