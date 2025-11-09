//program to reverse the elements of an array.

#include <stdio.h>

int main(){ 

    int n,i; //creates variables.

    printf("Enter no. of elements: "); //print statement.

    //checks whether the elements are valid or not.
    if(scanf("%d",&n) != 1)
    {
        printf("Invalid! input, try entering integer value.\n");
        return 1;
    }

    //creates an array.
    int arr[n];

    //conditional statement to enter elements in an array.
    for(i=0;i<n;i++)
    {
        printf("Enter your %d element: ",i);
        scanf("%d",&arr[i]);
    }

    printf("Reversed elements: "); //print statement.

    //conditional statement to reverse the elements on an array.
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }

    return 0; //indicates successful termination.
}