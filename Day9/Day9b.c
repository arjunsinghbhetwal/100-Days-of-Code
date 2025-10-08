#include <stdio.h>

int main() {

    float Grade,per; //creates variable

    printf("Enter your percentage: "); //print statement
    scanf("%f", &per);                 //inputs from user

    if(per >= 90 && per <= 100) //conditional statement
    {
        printf("Grade A\n");
    }
    else if(per >= 80 && per <= 89) //conditional statement
    {
    printf("Grade B\n");
    }
    else if(per >= 70 &&  per <= 79) //conditional statement
    {
        printf("Grade C\n");
    }
    else if(per >= 60 && per <= 69) //conditional statement
    {
        printf("Grade D\n");
    }
    else{                           //conditional statement
        printf("Grade F\n");
    }

    return 0;

}