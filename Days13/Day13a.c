#include <stdio.h>

int main() {

    unsigned short num1,num2;

    printf("Enter your number: ");
    scanf("%hd",&num1);

    for(int i=1;i<=num1;i++)
    {
        num2=num1-i;
        printf("%hd", num2);
    }

    return 0;
}