//program to count positive, negative and zero elemem=nts in an array.

#include <stdio.h>

int main(){

    int n,i; //creates variables.

    printf("Enter no. of elements: "); //print statement.

    //checks whether the input is valid or not.
    if(scanf("%d",&n) != 1)
    {
        printf("Invalid! input, try entering integer value\n");
        return 1;
    }

    //creates an array.
    int arr[n];

    //conditional statement for elements input.
    for(i=0;i<n;i++)
    {
    printf("Enter your %d element: ", i);
    scanf("%d",&arr[i]);
    }

    //creates variables.
    int pos=0,neg=0,zero=0;

    //conditional statement for elements count whether positive, negative or zero.
    for(i=0;i<n;i++)
    {
        if(arr[i] < 0)
        neg++;

        if(arr[i] > 0)
        pos++;

        if(arr[i] == 0)
        zero++;
    }

    //print statements.
    printf("Positive elements: %d\n", pos);
    printf("Negative elements: %d\n", neg);
    printf("Zero elements: %d\n", zero);


    return 0; //indicates successful termination.
}