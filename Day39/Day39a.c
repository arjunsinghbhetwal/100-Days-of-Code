//Program to check whether the martix is diagonal distinct.

#include <stdio.h>

int main() {

    unsigned short rows,col; //creates variables.

    printf("Enter order of the martix: "); //print statement.

    //checks whether the input is valid or not.
    if(scanf("%hd%hd",&rows,&col) != 2)
    {
        printf("Invalid! input.\n");
        return 1;
    }

    unsigned short arr[rows][col]; //creates a 2d array.

    //creates variables.
    unsigned short i,j;

    printf("Enter the elements: "); //print statement.

    //conditional statement for element input.
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%hd",arr[i][j]);
        }
    }

    printf("=== MATRIX ===\n"); //print statement.

    //conditional statement for printing the elements of MATRIX.
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%hd\t",arr[i][j]);
        }
        printf("\n");
    }

    int isDiagonal = 1; //creates a flag.

    //conditional statement checks whether the MATRIX is diagonall distinct.
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i == j){
                continue;
            }
            else{
                if(arr[i][j] != 0)
                {
                    isDiagonal = 0;
                    break;
                }
            }
            
        }
        if (!isDiagonal)
        {
            break;
        }
        
    }

    if (isDiagonal)
    {
        printf("The matrix is a diagonal matrix.\n");
    }
    else{
        printf("The matrix is not a diagonal matrix.\n");
    }

    return 0; //indicates successful terimnation.
}