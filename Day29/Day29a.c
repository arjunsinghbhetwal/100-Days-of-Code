#include <stdio.h>

int main() {

    int n,i,sum=0; //creates variables.

    printf("Enter the no. of elements: "); //print statement.
    scanf("%d", &n);                       //inputs from user.

    //creates an array.
    int arr[n];

    //contitional statement for elements input.
    for(i=0;i<n;i++)
    {
        printf("Enter your %d element: ", i);
        scanf("%d", &arr[i]);
    }

    //conditional statement for elemts return.
    for(i=0;i<n;i++)
    {
        sum += arr[i];
    }

    printf("Sum of the elements is: %d\n", sum); //print statement.


    return 0; //indicates successful termination.
}