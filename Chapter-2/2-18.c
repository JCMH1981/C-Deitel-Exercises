/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 2.18:
(Comparing Integers) Write a program that asks the user to enter two integers, 
obtains the numbers from the user, then prints the larger number followed by 
the words "is larger." If the numbers are equal, print the message "These 
numbers are equal." Use only the single-selection form of the if statement you 
learned in this chapter.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018.
Modified, 2022-01-03.*/

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	
	printf("Enter the first integer: ");
	scanf("%d", &a);
	printf("Enter the second integer: ");
	scanf("%d", &b);

	if (a > b)
	{
		printf("%d is larger.\n", a);
	}

	if (b > a)
	{
		printf("%d is larger.\n", b);
	}

	if (a == b)
	{
		printf("These number are equal.\n", a);
	}

	return 0;
}