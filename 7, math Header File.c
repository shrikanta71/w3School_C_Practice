#include<stdio.h>
#include<math.h>

int main()
{

    float n;

    printf("Enter the value of a number: ");
    scanf("%f", &n);

    printf("%f\n", pow(n,2)); // To print any numbers power we use pow() function.
    printf("%f\n", sqrt((float)n)); // To find the square-root of a number we use sqrt() function.

    /* ceil() function will print the closest upper integer number of the given floating number
    and floor() function will print the closest lower integer number of the given floating number.*/

    printf("%f\n", ceil(n));
    printf("%f\n", floor(n));
}
