#include<stdio.h>

int main()
{
    // Code to see a number is even or odd.
    printf("****Code to see a number is even or odd.****\n");
    int num;

    printf("\nEnter the number: ");
    scanf("%d", &num);

    if(num%2 == 0)
    {
        printf("EVEN\n");
    }

    else
    {
        printf("ODD\n");
    }


    // Code to print the days in week using switch.
    printf("\n\n****Code to print the days in week using switch.****\n");
    int day;

    printf("\nEnter the day: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Saturday\n");
        break;

    case 2:
        printf("Sunday\n");
        break;

    case 3:
        printf("Monday\n");
        break;

    case 4:
        printf("Tuesday\n");
        break;

    case 5:
        printf("Wednesday\n");
        break;

    case 6:
        printf("Thursday\n");
        break;

    case 7:
        printf("Friday n");
        break;

    default:
        printf("Invalide day\n");
    }

    return 0;
}
