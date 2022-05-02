/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 3.41:
(Multiples of 2 with an Infinite Loop) Write a program that keeps printing 
the multiples of the integer 2, namely 2, 4, 8, 16, 32, 64, and so on. Your 
loop should not terminate (i.e., you should create an infinite loop). What 
happens when you run this program?

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018. */

#include <stdio.h>

int main(void)
{
	int multiple_of_two = 2;

	while (1)
	/*An infinite loop: the expression inside while
	is always true (a non-zero value).*/
	{
		multiple_of_two *= 2;
		printf("%d ", multiple_of_two);
	}

	return 0;
}