#include <stdio.h>

int main() {

    float temp1,temp2;                       //creates variable

    printf("Enter temperature in celsius:"); //print statement
    scanf("%f", &temp1);                     //inputs from user

    temp2=temp1*1.8+32;                      //formula for celsius->Farenheit

    printf("Temperature in Farenheit: %.2f\n", temp2);

    return 0;

}