/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.30:
What does the following program print?

    #include <stdio.h>

    int main( void )
    {
        int row = 10;
        int column;

        while ( row >= 1 ) {
            column = 1;

            while ( column <= 10 ) {
                printf( "%s", row % 2 ? "<": ">" );
                column++;
            }

            row--;
            printf( "\n" );
        }

        return 0;
    }

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2017. */

#include <stdio.h>

int main(void)
{
    int row = 10; /* initialize row */
    int column; /* define column */

    while (row >= 1)
    { /* loop until row < 1 */
        column = 1; /* set column to 1 as iteration begins */

        while (column <= 10 )
        { /* loop 10 times */
            printf("%s", row % 2 ? "<": ">"); /* output */
            column++; /* increment column */
        } /* end inner while */

        row--; /* decrement row */
        printf("\n"); /* begin new output line */
    } /* end outer while */

    return 0; /* indicate program ended successfully */
} /* end function main */
