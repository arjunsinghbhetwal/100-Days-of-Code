//program to seach element within the array.

#include <stdio.h>

int main(){

    int n,i,key; //creates variables.

    printf("Enter no. of elements: "); //print statement.

    //checks whether the input is valid or not.
    if(scanf("%d",&n) != 1)
    {
        printf("Invalid! input, try entering integer values\n");
        return 1;
    }

    //creates an array.
    int arr[n];

    //conditional statement for user input.
    for(i=0;i<n;i++)
    {
        printf("Enter your %d element: ", i);
        scanf("%d",&arr[i]);
    }

    printf("Enter element for search: "); //print statement.
    scanf("%d",&key);                     //inputs from user.

    //conditional statement for checking element exisistence.
    for(i=0;i<n;i++)
    {
        if(key == arr[i]){
        printf("%d Element is found in %d index\n", key,arr[i]);
        break;
        }
    }

    //conditional statement if element is not found.
    if(key != arr[i]){
        printf("Element not found!\n");
    }


    return 0; //indicates successful termination.
}