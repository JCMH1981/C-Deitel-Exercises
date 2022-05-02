/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 3.33:
(Square of Asterisks) Write a program that reads in the side of a square and 
then prints that square out of asterisks. Your program should work for squares 
of all side sizes between 1 and 20. For example, if your program reads a size 
of 4, it should print

	****
	****
	****
	****

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018. 
Modified by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022-05-01 */

#include <stdio.h>

int main()
{
	int number_of_asterisks;
	int i, j; /*Counters*/

	printf("Enter the number of asterisks: ");
	scanf("%d", &number_of_asterisks);

	/*The number of asterisks must be greater than 0 and smaller than 21*/
	if ((number_of_asterisks > 0) && (number_of_asterisks < 21))
	{
		printf("The square is:\n");

		i = 1;
		while (i <= number_of_asterisks)
		{
			j = 1;
			while (j <= number_of_asterisks)
			{
				/*Print the asterisk sign*/
				printf("%c", '*');
				j++;
			}
			/*A new row of asterisks begins*/
			printf("\n");
			i++;
		}
	}
	else
	{
		printf("The number of asterisks must be greater than 0"
			" and smaller than 21.\n");
	}

	return 0;
}