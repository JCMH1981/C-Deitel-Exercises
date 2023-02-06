/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.25:
(Tabular Output) Write a program that uses looping to print the following
table of values. Use the tab escape sequence, \t, in the printf statement to
separate the columns with tabs.

    N   10*N    100*N   1000*N

    1   10      100     1000
    2   20      200     2000
    3   30      300     3000
    4   40      400     4000
    5   50      500     5000
    6   60      600     6000
    7   70      700     7000
    8   80      800     8000
    9   90      900     9000
    10  100     1000    10000

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2017. */

#include <stdio.h>

int main()
{
    /*Declare N*/
    int N;

    /*Initialize N*/
    N = 1;

    /*Print the first line*/
    printf("N\t10*N\t100*N\t1000*N\n\n");

    /*Loop N from 1 to 10*/
    while (N <= 10)
    {
        /*Print N, N*10, N*100, and N*1000*/
        printf("%d\t%d\t%d\t%d\n", N, N*10, N*100, N*1000);

        /*Increment N by 1*/
        N = N + 1;
    }

    printf("\n");

    return 0;
}
