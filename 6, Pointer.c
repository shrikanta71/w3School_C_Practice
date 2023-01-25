#include<stdio.h>

int main()
{
    int number1 = 40, number2 = 30;

    int* ptr1 = &number1;  // Pointer declaration
    int* ptr2 = &number2;

    printf("The sum of two numbers is: %d\n\n\n", *ptr1 + *ptr2);



    // Print array's elements using pointer.
    int myNumbers[4] = {25, 50, 75, 100};
    int* ptr = myNumbers;

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *(ptr + i));
    }

}
