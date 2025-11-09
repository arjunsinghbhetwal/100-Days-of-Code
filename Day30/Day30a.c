//program to count even and odd elements.

#include <stdio.h>

int main() {

    int n,i; //creates variables.

    printf("Enter the no. of elements: "); //print statement.

    //checks whether the input is valid or not.
    if(scanf("%d",&n) != 1)
    {
        printf("Invlaid! input, Try entering integer values\n");
        return 1;
    }

    //creates an array;
    int arr[n];

    //conditional statement for element input.
    for(i=0;i<n;i++)
    {
        printf("Enter your %d element: ",i);
        scanf("%d",&arr[i]);
    }

    //creates variables.
    int even,odd;

    //conditional statement for even odd.
    for(i=0;i<n;i++)
    {
        if(arr[i]%2 == 0)
        even++;

        if(arr[i]%2 != 0)
        odd++;
    }

    //print statement.
    printf("Count for odd and even is: %d,%d\n", odd,even);


    return 0; //indicates successful termination.
}