/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 3.29:
What does the following program print?

    #include <stdio.h>

    int main( void )
    {
        int count = 1;
        
        while ( count <= 10 ) {
        
            printf( "%s\n", count % 2 ? "****" : "++++++++" );
            count++;
        }
        
        return 0;
    }

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2017. */

#include <stdio.h>

int main(void)
{
    int count = 1; /* initialize count */
    
    while (count <= 10) 
    { /* loop 10 times */
        /* output line of text */
        printf("%s\n", count % 2 ? "****" : "++++++++");
        count++; /* increment count */
    } /* end while */
    
    return 0; /* indicate program ended successfully */
} /* end function main */