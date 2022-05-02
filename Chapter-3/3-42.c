/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 3.42:
(Diameter, Circumference and Area of a Cirle) Write a program that reads the 
radius of a circle (as a float value) and computes and prints the diameter, 
the circumference and the area. Use the value 3.14159 for π.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018. */

#include <stdio.h>

int main(void)
{
	float radius;
	float pi = 3.14159;
	float diameter, circumference, area;

	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);

	diameter = 2*radius;
	circumference = 2*pi*radius;
	area = pi*radius*radius;

	printf("The diameter of the circle is %f.\n", diameter);
	printf("The circumference of the circle is %f.\n", circumference);
	printf("The area of the circle is %f.\n", area);

	return 0;
}