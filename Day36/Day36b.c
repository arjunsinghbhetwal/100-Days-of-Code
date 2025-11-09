#include <stdio.h>

int main() {

    unsigned short arr[3][3]; //creates a 2d array.

    //creates variables.
    int i,j;
    
    printf("Enter the elements: ");  //print statement.

    //conditional statement for element input.
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%hd",&arr[i][j]);
        }
    }

    printf("===== MATRIX =====\n"); //print statement.

    //conditional statement for printing the matrix.
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%hd\t",arr[i][j]);
        }
        printf("\n");
    }

    short Sum=0; //creates a variable.

    //conditional statement for elements addition.
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            Sum += arr[i][j];
        }
    }

    printf("Sum of elements of matrix: %d\n", Sum); //print statement

    return 0; //indicates successful termination.
}