//program to add two matrices.

#include <stdio.h>

int main() {

    unsigned short i,j; //creates variables.

    //creates a 2d array.
    unsigned short arr1[3][3]; 
    unsigned short arr2[3][3];

    printf("Enter the elements: "); //print statement.

    //conditional statement.
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%hd",&arr1[i][j]);
        }
    }

    printf("=== MATRIX 1 ===\n"); //print statement.

    //conditional statement for printing MATRIX 1.
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%hd\t",arr1[i][j]);
        }
        printf("\n");
    }

    printf("Input elements for 2 Matrix: \n"); //print statement.

    //conditional statement for element input.
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%hd",&arr2[i][j]);
        }
    }

    printf("=== MATRIX 2 ===\n"); //print statement.

    //conditional statement for prining MATRIX 2.
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%hd\t",arr2[i][j]);
        }
        printf("\n");
    }

    printf("== ADD MATRIX ==\n"); //print statement.

    //conditional statement for "ADDITION OF MATRICES".
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            arr1[i][j] += arr2[i][j];
            printf("%hd\t", arr1[i][j]);
        }
        printf("\n");
    }


    return 0; //indicates successful termination.
}