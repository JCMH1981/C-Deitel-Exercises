/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.39:
(Counting 7s) Write a program that reads an integer and determines and prints
how many digits in the integer are 7s.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-02-11.*/

#include <stdio.h>

int main(void)
{
    int number, digit, number2;
    int power_of_ten = 1000000000, counter = 0;

    printf("Enter the number: ");
    scanf("%d", &number);
    number2 = number;

    while (power_of_ten >= 1)
    {
        digit = number2 / power_of_ten;
        number2 = number2 % power_of_ten;
        power_of_ten = power_of_ten / 10;

        if (digit == 7)
        {
            counter++;
        }
    }
    printf("There are %d 7s in the integer %d.\n", counter, number);

    return 0;
}
