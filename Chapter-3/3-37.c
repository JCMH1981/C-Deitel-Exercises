/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 3.37:
(How Fast is Your Computer?) How can you determine how fast your own computer 
really operates? Write a program with a while loop that counts from 1 to 
300,000,000 by 1s. Every time the count reaches a multiple of 100,000,000, 
print that number on the screen. Use your watch to time how long each 100 
million repetitions of the loop takes.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018. */


#include <stdio.h>

int main()
{
	int number;

	number = 1;
	while (number <= 300000000)
	{
		if ((number % 100000000) == 0)
		{
			printf("%d\n", number);
		}
		number++;
	}

	return 0;
}