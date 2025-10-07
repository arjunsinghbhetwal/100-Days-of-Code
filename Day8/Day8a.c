#include <stdio.h>

int main() {

    char alp1; //creates variable

    printf("Enter your character: "); //print statement
    scanf("%c", &alp1);               //inputs from user
 
    if (alp1 >= 'A' && alp1 <= 'Z')   //conditional statement
    {
        printf("uppercase Alphabet\n");
    }
    else if (alp1 >= 'a' && alp1 <= 'z') //conditional statement
    {
        printf("lowercase Alphabet\n");
    }
    else if(alp1 >= '0' && alp1 <= '9') //conditional statement
    {
        printf("digit\n");
    }
    else{                               //conditional statement
        printf("special character\n");
    }

    return 0;


}