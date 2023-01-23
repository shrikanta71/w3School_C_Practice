#include<stdio.h>

int main()
{
    // Print a matrix.
    printf("****Print a MATRIX.****\n\n");
    int matx[100][100],row, col, i, j;

    printf("Enter the row and column number: ");

    scanf("%d %d", &row, &col);

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            matx[i][j] = rand()%10;
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\t", matx[i][j]);
        }

        printf("\n");
    }



}

