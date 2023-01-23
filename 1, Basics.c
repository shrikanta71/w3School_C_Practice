#include<stdio.h>

int main()
{
    printf("This the my first C program.\n\n");

    printf("This is how you should print \" \"\n");


    const float PI = 3.1416;  // The value of PI can't be changed in this program.

    // This is used for single line comment.

    /* This is
    used for
    multi-line comment*/


    // Let's see the data type and their uses in C.
    printf("\n\n****Let's see the data type and their uses in C.****\n");

    int myNumber;
    float myNumberInFloat;
    char letter;

    printf("\nEnter the value of myNumber, myNumberInFloat, letter: ");

    scanf("%d %f %c", &myNumber, &myNumberInFloat, &letter);

    printf("%d\t%f\t%c\n", myNumber, myNumberInFloat, letter);


    // Let's see the use of operator in C.
    printf("\n\n****Let's see the use of operator in C.****\n");
    int number1, number2;

    printf("Enter two number: ");
    scanf("%d %d", &number1, &number2);

    printf("Sum: %d\tSubst: %d\tMult: %d\tDiv: %d\tModu: %d\n", number1+number2, number1-number2, number1*number2, number1/number2, number1%number2);

    return 0;
}
