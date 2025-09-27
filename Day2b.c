#include <stdio.h>

int main() {
    
    float radi,area,cir;          //creates variables

    printf("Enter the radius: "); //prints statement
    scanf("%f", &radi);           //inputs from user

    area=3.14*radi*radi;               //formula for area

    printf("Area of circle is: %.2f\n", area); //rpints area of circle

    cir=2*3.14*radi;              //formula for circumference

    printf("Circumference of circle is:%.2f\n", cir); //prints circumference of circle

    return 0;

}