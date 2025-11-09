#include <stdio.h>

int main() {

    int n,i; //creates variables.

    printf("Enter ther no. of elements: "); //print statement.
    
    //checks whether the input is valid or not.
    if(scanf("%d", &n) != 1)
    {
        printf("Invlaid! input, Try entering integer");
        return 1;
    }                        

    //creates an array.
    int arr[n];

    //conditional statement to inputs elements.
    for(i=0;i<n;i++)
    {
        printf("Enter your %d  element: ", i);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int min = arr[0];

    //conditional statement for element assignment.
    for(i=0;i<n;i++)
    {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
        
    }

    //print statement.
    printf("The max and min elements are: %d,%d\n", max,min);


    return 0; //indicates successful termination.
}