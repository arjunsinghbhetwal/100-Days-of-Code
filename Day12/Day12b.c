#include <stdio.h>

int main() {

    unsigned short elec_bill,bill; //creates variable.

    printf("Enter late days: "); //print statement.

    //checks whether the input is valid.
    if(scanf("%hd",&elec_bill) != 1)
    {
        printf("Invalid! Input");
        return 1;
    }

    //conditional statement.
    if(elec_bill == 0)
    {
        printf("No fine\n");
    }

    //First 100 units: $5/unit.
    else if(elec_bill <= 100)
    {
        bill = elec_bill;
        printf("units %hd bill: %hd\n", elec_bill,bill);
    }

    //Next 100 units: $7/unit.
    else if(elec_bill <= 200)
    {
        bill = (100 * 5) + ((elec_bill-100) * 7);
        printf("units %hd bill: %hd\n", elec_bill,bill);
    }

    //Next 100 units: $10/unit.
    else if(elec_bill <= 300)
    {
        bill = (100 * 12) + ((elec_bill-200) * 10);
        printf("units %hd bill: %hd\n", elec_bill,bill);
    }

    //Above at $12/unit.
    else
    {
        bill = elec_bill*12;
        printf("units %hd bill: %hd\n", elec_bill,bill);
    }

    return 0; //indicates successful termination.
}