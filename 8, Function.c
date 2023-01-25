// Fibonacci number using recursion.

#include<stdio.h>

int recursiveFibonacci(int); // Function declaration.

int main()
{

    int m, x;

    printf("Enter the number: ");

    scanf("%d",&m);

    for(x=0; x<m; x++)
    {
        printf("%d\t",recursiveFibonacci(x));
    }

    printf("\n");

    return 0;

}



int recursiveFibonacci(int x) // Function definition.
{

    if(x==0)
    {
        return 0;
    }

    else if(x==1)
    {
        return 1;
    }

    else
    {
        return (recursiveFibonacci(x-1) + recursiveFibonacci(x-2));
    }

}
