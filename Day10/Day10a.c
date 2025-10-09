#include <stdio.h>

int main() {
    int a, b, c; //creates variables
    printf("Enter the sides of the triangle:\n"); //print statement
    scanf("%d %d %d", &a, &b, &c); //inputs from user

    // Check for triangle validity
    if(a + b > c && a + c > b && b + c > a) { //conditional statement
        if(a == b && b == c) {
            printf("The triangle is Equilateral\n");
        }
        else if(a == b || b == c || a == c) { //conditional statement
            printf("The triangle is Isosceles\n");
        }
        else {                                //conditional statements
            printf("The triangle is Scalene\n");
        }
    }
    else {                                    //conditional statements
        printf("The triangle is not valid\n");
    }
    return 0;
}
