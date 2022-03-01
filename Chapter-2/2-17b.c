/* C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 2.17a:
(Printing Values with printf) Write a program that prints the numbers 1 to 4 
on the same line. Write the program using the following methods.
    b) Using one printf statement with four conversion specifiers.

Written by Juan Carlos Moreno, year 2018.*/

#include <stdio.h>

int main(void)
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;

	printf("%d %d %d %d\n", a, b, c, d);

	return 0;
}