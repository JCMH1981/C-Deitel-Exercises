/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.26:
(Tabular Output) Write a program that utilizes looping to produce the
following table of values:

    A       A+2     A+4     A+6
    3       5       7       9
    6       8       10      12
    9       11      13      15
    12	    14      16      18
    15      17      19      21

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2017. */

#include <stdio.h>

int main()
{
    /*Declare N*/
    int A;

    /*Initialize N to 3*/
    A = 3;

    /*Print the first line*/
    printf("A\tA+2\tA+4\tA+6\n\n");

    /*Loop A from 3 to 15*/
    while (A <= 15)
    {
        /*Print A, A+2, A+4, and A+6*/
        printf("%d\t%d\t%d\t%d\n", A, A+2, A+4, A+6);

        /*Increment A by 3*/
        A = A + 3;
    }

    printf("\n");

    return 0;
}
