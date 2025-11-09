#include <stdio.h>

int main(){

    //creates variables.
    int n,i;

    printf("Enter no. of elements: "); //print statement.
    scanf("%d", &n);                   //inputs from user.

    int arr[n];     //creates an array.

    //conditional statement for elements input.
    for(i=0;i<n;i++)
    {
        printf("Enter your %d element: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Your elements are: "); //print statement

    //conditional statement for returning the elements.
    for(i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }


    return 0; //indicates successful termination.
}