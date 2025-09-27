#include <stdio.h>

int  main() {

    unsigned int len,bre,area,Per; //creates variables

    printf("Enter length: "); //Prints enter statement
    scanf("%d", &len);        //inputs length

    printf("Enter breadth: ");//Prints enter statement
    scanf("%d", &bre);        //inputs breadth

    area=len*bre;             //formula for area
    
    printf("Area of the rectangle is:%d units\n", area); //prints area

    Per=2*(len+bre);          //formula for perimeter

    printf("Perimeter of rectangle is:%2d units\n", Per); //prints perimeter

    return 0;

}