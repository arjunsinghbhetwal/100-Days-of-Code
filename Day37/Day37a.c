//Program to add the elements of rows and store them in and array.

#include <stdio.h>

int main() {

    unsigned short rows,col;  //creates varaibles.

    printf("Enter no. of rows and columns: "); //print statement.

    //validation
    if(scanf("%hd%hd",&rows,&col) != 2)
    {
        printf("Invalid! input\n");
        return 1;
    }

    //creates a 2d array.
    unsigned short arr[rows][col];
    unsigned short arr1[rows];

    printf("Enter your elements: "); //print statement.

    //creates variables.
    unsigned short i,j;

    //conditional statement for elements input.
    for(i=0;i<rows;i++)
    {
        arr1[i]=0;
        for(j=0;j<col;j++)
        {
            scanf("%hd",&arr[i][j]);
            arr1[i] += arr[i][j];
        }
    }

    printf("===== MATRIX =====\n"); //print statement.

    //conditional statement for printing "MATRIX".
    for(i=0;i<rows;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%hd\t",arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //conditional statement to print sum of rows.
    for(i=0;i<rows;i++)
    {
        printf("%hd ",arr1[i]);
    }
    printf("\n");


    return 0;
}