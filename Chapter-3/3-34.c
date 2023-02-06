/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.34:
(Hollow Square of Asterisks) Modify the program you wrote in Exercise 3.33 so
that it prints a hollow square. For example, if your program reads a size of
5, it should print

    *****
    *   *
    *   *
    *   *
    *****

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018. */

#include <stdio.h>

int main()
{
    int number_of_asterisks;
    int i; /*Counter of the rows*/
    int j; /*counter of the columns*/

    printf("Enter the number of asterisks: ");
    scanf("%d", &number_of_asterisks);

    /*The number of asterisks must be greater than 0*/
    if (number_of_asterisks > 0)
    {
        /*The number of asterisks must be smaller than 21*/
        if (number_of_asterisks < 21)
        {
            printf("The square is:\n");

            /*Print the first row*/
            j = 1;
            while (j <= number_of_asterisks)
            {
                /*Print the asterisk character*/
                printf("%c", '*');
                j++;
            }
            printf("\n");

            /*Print from the second row to next-to-last row*/
            i = 2;
            while (i <= number_of_asterisks - 1)
            {
                /*Print the asterisk of the first column*/
                printf("%c", '*');
                /*Print the row with the whitespace characters*/
                j = 2;
                while (j <= number_of_asterisks - 1)
                {
                    printf(" ");
                    j++;
                }
                /*Print the asterisk of the last column*/
                printf("%c", '*');
                /*A new row begins*/
                printf("\n");
                i++;
            }

            /*Print the last row*/
            j = 1;
            while (j <= number_of_asterisks)
            {
                /*Print the asterisk character*/
                printf("%c", '*');
                j++;
            }
            printf("\n");
        }
        else
        {
            printf("The number of asterisks must be greater than 0"
                   " and smaller than 21.\n");
        }
    }
    else
    {
        printf("The number of asterisks must be greater than 0"
               " and smaller than 21.\n");
    }

    return 0;
}
