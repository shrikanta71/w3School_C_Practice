#include<stdio.h>

int main()
{
    // Code of finding Fibonacci Sequence using for loop.
    printf("****Code of finding Fibonacci Sequence using for loop.****\n\n");

    int n, i, n1=0, n2=1, n3;

    printf("Enter the number: ");
    scanf("%d", &n);

    if(n == 1)
    {
        printf("0\n");
    }

    else if(n == 2)
    {
        printf("0\t1\n");
    }

    else
    {
        printf("0\t1\t");

        for(i=3; i<=n; i++)
        {
            n3 = n1+n2;

            printf("%d\t", n3);

            n1 = n2;
            n2 = n3;
        }
    }

    printf("\n");


    // Code to sum the natural number using while loop.
    printf("\n\n****Code to sum the natural number using while loop.****\n\n");

    int num, j = 1, sum = 0;

    printf("Enter the number: ");

    scanf("%d", &num);

    while(j<=num)
    {
        sum +=j;
        j++;
    }

    printf("The sum of %d natural numbers is: %d\n", num, sum);


    // Code to print someone name his or her desire time using do while loop.
    printf("\n\n****Code to print someone name his or her desire time using do while loop.****\n\n");

    int t;
    char name[30];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter the number how many time do you want to print it: ");
    scanf("%d", &t);

    int k = 0;
    do
    {
        printf("%s\n", name);

        k++;
    }while(k<t);

    return 0;
}
