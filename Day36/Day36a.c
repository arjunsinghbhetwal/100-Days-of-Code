#include <stdio.h>

int main() {

    unsigned short row,col; //creates variables.

    printf("Enter no. of rows and columns: ");  //print statement.

    //Validation statement.
    if(scanf("%hd%hd",&row,&col) != 2)
    {
        printf("Invalid! input\n");
        return 1;
    }

    //creates a 2d array
    unsigned short arr[row][col];

    //comditional statement for elements input.
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter your elements: ");
            scanf("%hd",&arr[i][j]);
        }
    }

    //conditional statement to print the elements.
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%hd\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0; //indicates successful termination.
}