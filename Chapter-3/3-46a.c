/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 3.46:
(Factorial) The factorial of a nonnegative integer n is written n! (pronounced 
"n factorial") and is defined as follows:
	n! = n · (n - 1) · (n - 2) · … · 1 
		(for values of n greater than or equal to 1)
and
	n! = 1 (for n = 0).
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.
	a) Write a program that reads a nonnegative integer and computes and 
	   prints its factorial.
	b) Write a program that estimates the value of the mathematical constant e 
	   by using the formula:
					 1      1	   1
	   		e = 1 + ---- + ---- + ---- + ..
                     1!     2!     3!
	c) Write a program that computes the value of ex by using the formula
			 		   x     x^2	x^3
	   		e^x = 1 + ---- + ---- + ---- + ..
                       1!     2!     3!
                  
Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2017. */

#include <stdio.h>

int main()
{
	/*The nonnegative number*/
	int number;
	/*The factorial of the nonnegative number*/
	int factorial;
	/*The variable counter saves the decrementing of number*/
	int counter;

	/*Read number*/
	printf("Enter the nonnegative integer: ");
	scanf("%d", &number);

	/*Initialization of variables*/
	factorial = number;
	counter = number - 1;

	/*The factorial of 0 is 1 (0! = 1)*/
	if (number == 0)
	{
		factorial = 1;
	}
	/*If the number is another than 0, then ...*/
	else
	{
		/*The value of n must be greater than or equal to 1*/
		while (counter >= 1)
		{
			/*n! = n · (n - 1) · (n - 2) · ... · 1*/
			factorial = factorial*counter;
			/*Decrement counter*/
			counter = counter - 1;
		}
	}

	/*Print the factorial of number*/
	printf("%d! (factorial of %d) is %d\n", number, number, factorial);

	return 0;
}