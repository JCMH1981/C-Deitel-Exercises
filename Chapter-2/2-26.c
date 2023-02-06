/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 2.26:
(Multiples) Write a program that reads in two integers and determines and
prints if the first is a multiple of the second. [Hint: Use the remainder
operator.]

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018.*/

#include <stdio.h>

int main()
{
    int number1;
    int number2;

    printf("Input the first integer: ");
    scanf("%d", &number1);
    printf("Input the second integer: ");
    scanf("%d", &number2);

    if (number1 > number2)
    {
        if ((number1 % number2) == 0)
        {
            printf("%d is multiple of %d.\n", number1, number2);
        }

        if ((number1 % number2) != 0)
        {
            printf("%d is not multiple of %d.\n", number1, number2);
        }
    }

    if (number1 < number2)
    {
        printf("%d is not multiple of %d.\n", number1, number2);
    }

    return 0;
}
