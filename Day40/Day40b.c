//Program to multiply two matrices.

#include <stdio.h>

int main() {

    unsigned short rows,col,i,j; //creates variables.

    printf("Enter the order of the matrices: "); //print statement.

    //checks whether the input is valid or not.
    if(scanf("%hd%hd",&rows,&col) != 2)
    {
        printf("Invalid! input.\n");
        return 1;
    }

    //creates 2d array.
    unsigned short arr[rows][col];

    printf("Enter the elements of 1st matrix: "); //print statement.

    //conditional statement for input elements.
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%hd",&arr[i][j]);
        }
    }

    printf("=== MATRIX-1 ===\n"); //print statement.

    //conditional statement for printing the MATRIX.
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%hd\t",arr[i][j]);
        }
        printf("\n");
    }

    //creates 2d array.
    unsigned short arr1[rows][col];

    printf("Enter the elements of 2nd MATRIX: "); //print statement.

    //conditional statement for input elements.
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%hd",&arr1[i][j]);
        }
    }

    printf("=== MATRIX-2 ===\n"); //print statement.

    //conditional statement for printing the MATRIX.
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%hd\t",arr1[i][j]);
        }
        printf("\n");
    }

    //conditional statement to multiply the martices.
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            arr[i][j] *= arr1[i][j];
        }
    }

    printf("==MULTIPLICATION==\n"); //print statement.

    //conditional statement for printing the MATRIX.
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%hd\t",arr[i][j]);
        }
        printf("\n");
    }


    return 0; //indicates successful termination.
}