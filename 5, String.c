#include<stdio.h>
#include<string.h>  // To use string functions we have to use this header file.

int main()
{
    char name[] = "Shrikanta Paul.";

    int n = strlen(name); // To find the size of string length we use strlen() function.

    printf("The size or length of this string is: %d\n\n", n);

    for (int i=0; i<n; i++)
    {
        printf("%c\t", name[i]);
    }
    printf("\n");



    // To add two string we use strcat() function.

    char str1[] = "Shrikanta ", str2[] = "Paul.";

    printf("%s\n\n", strcat(str1, str2));



    // To copy string we use strcpy() function.

    char st1[20] = "Shrikanta Paul.";
    char st2[20];

    strcpy(st2, st1);

    printf("%s\n\n\n", st2);




    // To compare two string we use strcmp() function.

    char sr1[] = "Shrikanta Paul.";
    char sr2[] = "Shrikanta Paul.";
    char sr3[] = "Shrikanta paul.";

    printf("%d\n", strcmp(sr1, sr2));

    printf("%d\n", strcmp(sr1, sr3));

}
