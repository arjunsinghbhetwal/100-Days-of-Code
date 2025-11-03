#include <stdio.h>

int main() {

    int i,n,sum=0,num=1; //creates variable.

    printf("Enter no. of terms: "); //print statement.
    
    //checks input from user valid or not.
    if(scanf("%d",&num) != 1)
    {
        printf("Invalid! Input");
        return 1;
    }                        


    for(i=1;i<=n;i++)
    {
        sum=sum+num;  //reassignment value to sum.

        num=num+2;    //reassignement value to num.

    }

    //print statement.
    printf("Sum of first %d odd terms: %d\n", n,sum);

    return 0; //indicates successful termination 
}