/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.23:
(Printing Numbers from a Loop) Write a program that utilizes looping to print
the numbers from 1 to 10 side by side on the same line with three spaces
between numbers.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2017. */

#include <stdio.h>

int main()
{
    /*In the variable "number" we save the numbers from 1 to 10*/
    int number;

    /*Initialize "number" to 1*/
    number = 1;

    /*Loop until "number" is 10*/
    while (number <= 10)
    {
        /*Print "number" plus three spaces*/
        printf("%d   ", number);
        /*Increment "number" by 1*/
        number = number + 1;
    }

    printf("\n");

    return 0;
}
