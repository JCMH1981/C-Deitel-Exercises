/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 2.31:
(Table of Squares and Cubes) Using only the techniques you learned in this 
chapter, write a program that calculates the squares and cubes of the numbers 
from 0 to 10 and uses tabs to print the following table of values:

number  square  cube
0       0       0
1       1       1
2       4       8
3       9       27
4       16      64
5       25      125
6       36      216
7       49      343
8       64      512
9       81      729
10      100     1000

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018.*/

#include <stdio.h>

int main()
{
	int zero = 0;
	int one = 1;
	int two = 2;
	int three = 3;
	int four = 4;
	int five = 5;
	int six = 6;
	int seven = 7;
	int eight = 8;
	int nine = 9;
	int ten = 10;

	printf("number\tsquare\tcube\n");
	printf("%d\t%d\t%d\n", zero, zero*zero, zero*zero*zero);
	printf("%d\t%d\t%d\n", one, one*one, one*one*one);
	printf("%d\t%d\t%d\n", two, two*two, two*two*two);
	printf("%d\t%d\t%d\n", three, three*three, three*three*three);
	printf("%d\t%d\t%d\n", four, four*four, four*four*four);
	printf("%d\t%d\t%d\n", five, five*five, five*five*five);
	printf("%d\t%d\t%d\n", six, six*six, six*six*six);
	printf("%d\t%d\t%d\n", seven, seven*seven, seven*seven*seven);
	printf("%d\t%d\t%d\n", eight, eight*eight, eight*eight*eight);
	printf("%d\t%d\t%d\n", nine, nine*nine, nine*nine*nine);
	printf("%d\t%d\t%d\n", ten, ten*ten, ten*ten*ten);

	return 0;
}