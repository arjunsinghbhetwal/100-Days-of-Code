//program to find the transpose of a matrix.

#include  <stdio.h>

int main() {

    unsigned short rows,col; //creates variables.

    printf("Enter no. of rows and columns: "); //print statement.

    //validation.
    if(scanf("%hd%hd",&rows,&col) != 2)
    {
        printf("Invalid! input\n");
        return 1;
    }

    //creates variables.
    int i,j;

    //creates 2d array.
    unsigned short arr[i][j];

    printf("Enter the elements: "); //print statement.

    //conditional statement for elements input.
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%hd",&arr[i][j]);
        }
    }

    //creates a 2d array.
    unsigned short trans_arr[rows][col];

    printf("===== MATRIX =====\n"); //print statement.

    //conditional statement to print the "MATRIX".
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%hd\t", arr[i][j]);
            trans_arr[j][i] = arr[i][j];
        }
        printf("\n");
    }

    printf("==== TRANSPOSED ====\n"); //print statement.

    //conditional statetement for printing "TRANSPOSED MATRIX".
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%hd\t",trans_arr[i][j]);
        }
        printf("\n");
    }


    return 0; //indicates successful termination.
}