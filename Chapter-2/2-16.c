/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 2.16:
(Arithmetic) Write a program that asks the user to enter two numbers, obtains
them from the user and prints their sum, product, difference, quotient and
remainder.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018.*/

#include <stdio.h>

int main(void)
{
    int a;
    int b;

    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d * %d = %d\n", a, b, a * b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d / %d = %d\n", a, b, a / b);
    printf("%d mod %d = %d\n", a, b, a % b);

    return 0;
}
