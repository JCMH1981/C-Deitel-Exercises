/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 3.13:
What does the following program print?

#include <stdio.h>

int main( void )
{
	int x = 1, total = 0, y;
	
	while ( x <= 10 ) {
		y = x * x;
		printf( "%d\n", y );
		total += y;
		++x;
	}
		
	printf("Total is %d\n", total);
	return 0;
} 

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2017. */

#include <stdio.h>

int main(void)
{
	int x = 1, total = 0, y;
	
	while (x <= 10) 
	{
		y = x*x;
		printf("%d\n", y);
		total += y;
		++x;
	} /* end while */
		
	printf("Total is %d\n", total);
	return 0;
} /* end main */