/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.40:
(Checkerboard Pattern of Asterisks) Write a program that displays the
following checkerboard pattern:

    * * * * * * * *
     * * * * * * * *
    * * * * * * * *
     * * * * * * * *
    * * * * * * * *
     * * * * * * * *
    * * * * * * * *
     * * * * * * * *

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-02-08.*/

#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i <= 8; i++)
    {
        if ((i % 2) == 0)
        {
            printf(" ");
        }
        for (j = 1; j <= 8; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
