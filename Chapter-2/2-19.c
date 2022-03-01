/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 2.19:
(Arithmetic, Largest Value and Smallest Value) Write a program that inputs 
three different integers from the keyboard, then prints the sum, the average, 
the product, the smallest and the largest of these numbers. Use only the 
single-selection form of the if statement you learned in this chapter. The 
screen dialogue should appear as follows:

	Input three different integers: 13 27 14
	Sum is 54
	Average is 18
	Product is 4914
	Smallest is 13
	Largest is 27

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018.*/

#include <stdio.h>

int main(void)
{
	int a; /*First integer*/
	int b; /*Second integer*/
	int c; /*Third integer*/

	printf("Input three different integers: ");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);

	printf("Sum is %d\n", a + b + c);
	printf("Average is %d\n", (a + b + c)/3);
	printf("Product is %d\n", a * b * c);

	/*Print the smallest integer*/
	if (a < b)
	{
		if (a < c)
		{
			printf("Smallest is %d\n", a);
		}
	}
	if (b < a)
	{
		if (b < c)
		{
			printf("Smallest is %d\n", b);
		}
	}
	if (c < a)
	{
		if (c < b)
		{
			printf("Smallest is %d\n", c);
		}
	}

	/*Print the largest integer*/
	if (a > b)
	{
		if (a > c)
		{
			printf("Largest is %d\n", a);
		}
	}
	if (b > a)
	{
		if (b > c)
		{
			printf("Largest is %d\n", b);
		}
	}
	if (c > a)
	{
		if (c > b)
		{
			printf("Largest is %d\n", c);
		}
	}

	return 0;
}