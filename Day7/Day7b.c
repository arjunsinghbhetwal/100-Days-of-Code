#include <stdio.h>

int main() {

    char alp1;

    printf("Enter your character: ");
    scanf("%c", &alp1);

    if(('Z' >= alp1 && alp1 >= 'A') || ('z' >= alp1 && alp1 >= 'a')){
        if(alp1 == 'A' || alp1 == 'E' || alp1 == 'I' || alp1 == 'O' || alp1 == 'U'||
           alp1 == 'a' || alp1 == 'e' || alp1 == 'o' || alp1 == 'u')
           {
            printf("Entered character %c is a vowel\n", alp1);
           }
    else{
        printf("Entered character is consonant\n");
    }
    }
    else {
        printf("%c is not an alphabetical character\n", alp1);
    }
    
    
    return 0;
}