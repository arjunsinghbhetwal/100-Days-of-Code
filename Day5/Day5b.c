#include <stdio.h>

int main() {
                
    int totalseconds,hours,minutes,seconds; //creates variables

    printf("Enter totalseconds: ");       //print statement
    scanf("%d", &totalseconds);           //inputs from user

    hours=totalseconds/3600;

    minutes=(totalseconds%3600)/60;       //formulas

    seconds=minutes/60;

    printf("Time in HH:MM:SS = %02d:%02d:%02d\n", hours,minutes,seconds); //print statement

    return 0;

}