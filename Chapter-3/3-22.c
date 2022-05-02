/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 3.22:
(Predecrementing vs. Postdecrementing) Write a program that demonstrates the 
difference between predecrementing and postdecrementing using the decrement 
operator --.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2017. */

#include <stdio.h>

int main()
{
	int number;

	/*Predecrementing*/
	number = 3; /*Assign 3 to number*/
	printf("number = %d\n", number); /*Print 3*/
	printf("--number = %d\n", --number); /*Predecrement and then print 2*/
	printf("number = %d\n", number); /*Print 2*/

	printf("\n");

	/*Postdecrementing*/
	number = 3; /*Assign 3 to number*/
	printf("number = %d\n", number); /*Print 3*/
	printf("number-- = %d\n", number--); /*Print 3 and then postdecrement*/
	printf("number = %d\n", number); /*Print 2*/

}