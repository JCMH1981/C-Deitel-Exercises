/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 2.30:
(Separating Digits in an Integer) Write a program that inputs one five-digit
number, separates the number into its individual digits and prints the digits
separated from one another by three spaces each. [Hint: Use combinations of
integer division and the remainder operation.] For example, if the user types
in 42139, the program should print

    4   2   1   3   9

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018.*/

#include <stdio.h>

int main()
{
    int number;

    /*The five digits of the number*/
    int first_digit;
    int second_digit;
    int third_digit;
    int fourth_digit;
    int fifth_digit;

    /*The remainders*/
    int first_remainder;
    int second_remainder;
    int third_remainder;
    int fourth_remainder;

    printf("Enter the number of five digits: ");
    scanf("%d", &number);

    first_digit = number / 10000;
    first_remainder = number % 10000;

    second_digit = first_remainder / 1000;
    second_remainder = first_remainder % 1000;

    third_digit = second_remainder / 100;
    third_remainder = second_remainder % 100;

    fourth_digit = third_remainder / 10;
    fourth_remainder = third_remainder % 10;

    /*The fourth remainder is the fifth digit*/
    fifth_digit = fourth_remainder;

    /*Print the digits separated by three spaces*/
    printf("%d   ", first_digit);
    printf("%d   ", second_digit);
    printf("%d   ", third_digit);
    printf("%d   ", fourth_digit);
    printf("%d\n",  fifth_digit);

    return 0;
}
