/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 2.23:
(Largest and Smallest Integers) Write a program that reads in five integers 
and then determines and prints the largest and the smallest integers in the 
group. Use only the programming techniques you have learned in this chapter.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018.*/

#include <stdio.h>

int main(void)
{	
	int a; /*The first integer*/
	int b; /*The second integer*/
	int c; /*The third integer*/
	int d; /*The fourth integer*/
	int e; /*The fifth integer*/

	/*Enter the five integers*/
	printf("Enter the first integer: ");
	scanf("%d", &a);
	printf("Enter the second integer: ");
	scanf("%d", &b);
	printf("Enter the third integer: ");
	scanf("%d", &c);
	printf("Enter the fourth integer: ");
	scanf("%d", &d);
	printf("Enter the fifth integer: ");
	scanf("%d", &e);

	/*a*/
	/*Determine if a is the largest integer*/
	if (a > b)
	{
		if (a > c)
		{
			if (a > d)
			{
				if (a > e)
				{
					printf("The largest integer is %d\n", a);
				}	
			}
		}
	}
	/*Determine if a is the smallest integer*/
	if (a < b)
	{
		if (a < c)
		{
			if (a < d)
			{
				if (a < e)
				{
					printf("The smallest integer is %d\n", a);
				}	
			}
		}
	}

	/*b*/
	/*Determine if b is the largest integer*/
	if (b > a)
	{
		if (b > c)
		{
			if (b > d)
			{
				if (b > e)
				{
					printf("The largest integer is %d\n", b);
				}	
			}
		}
	}
	/*Determine if b is the smallest integer*/
	if (b < a)
	{
		if (b < c)
		{
			if (b < d)
			{
				if (b < e)
				{
					printf("The smallest integer is %d\n", b);
				}	
			}
		}
	}

	/*c*/
	/*Determine if c is the largest integer*/
	if (c > a)
	{
		if (c > b)
		{
			if (c > d)
			{
				if (c > e)
				{
					printf("The largest integer is %d\n", c);
				}	
			}
		}
	}
	/*Determine if c is the smallest integer*/
	if (c < a)
	{
		if (c < b)
		{
			if (c < d)
			{
				if (c < e)
				{
					printf("The smallest integer is %d\n", c);
				}	
			}
		}
	}

	/*d*/
	/*Determine if d is the largest integer*/
	if (d > a)
	{
		if (d > b)
		{
			if (d > c)
			{
				if (d > e)
				{
					printf("The largest integer is %d\n", d);
				}	
			}
		}
	}
	/*Determine if d is the smallest integer*/
	if (d < a)
	{
		if (d < b)
		{
			if (d < c)
			{
				if (d < e)
				{
					printf("The smallest integer is %d\n", d);
				}	
			}
		}
	}

	/*e*/
	/*Determine if e is the largest integer*/
	if (e > a)
	{
		if (e > b)
		{
			if (e > c)
			{
				if (e > d)
				{
					printf("The largest integer is %d.\n", e);
				}	
			}
		}
	}
	/*Determine if e is the smallest integer*/
	if (e < a)
	{
		if (e < b)
		{
			if (e < c)
			{
				if (e < d)
				{
					printf("The smallest integer is %d.\n", e);
				}	
			}
		}
	}

	return 0;
}