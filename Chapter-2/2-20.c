/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 2.20:
(Diameter, Circumference and Area of a Circle) Write a program that reads in 
the radius of a circle and prints the circle's diameter, circumference and 
area. Use the constant value 3.14159 for π. Perform each of these calculations 
inside the printf statement(s) and use the conversion specifier %f. [Note: In 
this chapter, we have discussed only integer constants and variables. In 
Chapter 3 we'll discuss floating-point numbers, i.e., values that can have 
decimal points.]

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018.*/

#include <stdio.h>

int main(void)
{
	float radius;
	float pi = 3.14159;

	printf("Input the radius of the circle: ");
	scanf("%f", &radius);

	printf("Diameter of the circle is %f.\n", 2 * radius);
	printf("Circumference of the circle is %f.\n", 2 * pi * radius);
	printf("Area of the circle is %f.\n", pi * radius * radius);

	return 0;
}