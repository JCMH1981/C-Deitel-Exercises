/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 3.43:
What is wrong with the following statement? Rewrite the statement to 
accomplish what the programmer was probably trying to do.

	printf( "%d", ++( x + y ) );

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018. 
Modified by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022-05-01. */

#include <stdio.h>

int main(void)
{
	int x = 2;
	int y = 3;
	int z = x + y;

	printf("%d.\n", ++z);

	return 0;
}