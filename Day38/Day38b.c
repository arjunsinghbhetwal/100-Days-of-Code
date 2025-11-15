//program to check whether the MATRIX is symmetric or not.

#include <stdio.h>

int main(){

    unsigned short rows,col; //creates variables.

    printf("Enter the order of the MATRIX: "); //print statement.

    //checks whether the input is valid or not.
    if(scanf("%hd%hd",&rows,&col) != 2)
    {
        printf("Invalid! input.\n");
        return 1;
    }

    //creates variables.
    unsigned short i,j;

    //creates 2d array.
    unsigned short arr[rows][col];

    printf("Enter the elements of MATRIX: "); //print statement.

    //conditional statement for input elements in MATRIX.
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%hd",&arr[i][j]);
        }
    }

    printf("\n"); //print statement.

    //checks whether the MATRIX is symmetric.
    if(rows != col)
    {
        printf("Matrix not symmetric\n");
    }
    else
    {
        printf("Matrix is symmertric!\n");
    }

    printf("\n"); //print statement.

    printf("=== MATRIX ===\n"); //print statement.

    //conditional statement for printing the elements.
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%hd\t",arr[i][j]);
        }
        printf("\n");
    }







    return 0;
}