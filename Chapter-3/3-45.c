/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 3.45:
(Sides of a Right Triangle) Write a program that reads three nonzero integers 
and determines and prints if they could be the sides of a right triangle.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2017.
Modified by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022-05-01. */

#include <stdio.h>

int main()
{
	/*The three integers*/
	int first_integer;
	int second_integer;
	int third_integer;

	/*The sides of the right triangle*/
	int hypothenuse;
	int first_cathetus;
	int second_cathetus;

	/*Enter the three integers*/
	printf("Enter the first integer: ");	
	scanf("%d",&first_integer);
	printf("Enter the second integer: ");
	scanf("%d", &second_integer);
	printf("Enter the third integer: ");
	scanf("%d", &third_integer);

	/*Determine the hypothenuse and the catheti*/
	if (first_integer > second_integer)
	{
		if (first_integer > third_integer)
		{
			hypothenuse = first_integer;
			first_cathetus = second_integer;
			second_cathetus = third_integer;
		}
	}
	if (second_integer > first_integer)
	{
		if (second_integer > third_integer)
		{
			hypothenuse = second_integer;
			first_cathetus = first_integer;
			second_cathetus = third_integer;
		}
	}
	if (third_integer > first_integer)
	{
		if (third_integer > second_integer)
		{
			hypothenuse = third_integer;
			first_cathetus = first_integer;
			second_cathetus = second_integer;
		}
	}

	/*The integers must be nonzero*/
	if (first_integer != 0)
	{
		if (second_integer != 0)
		{
			if (third_integer != 0)
			{
				/*Determine if the integers are the sides of the right 
				  triangle*/
				if (hypothenuse*hypothenuse == 
					(first_cathetus*first_cathetus + 
					 second_cathetus*second_cathetus))
				{
					printf("The integers are the sides of a right ");  
					printf("triangle.\n");
				}
				else
				{
					printf("The integers are not the sides of a right ");  
					printf("triangle.\n");
				}
			}
		}
	}
	else
	{
		printf("Some or all of the numbers are nonzero.\n");
	}
	
	return 0;
}