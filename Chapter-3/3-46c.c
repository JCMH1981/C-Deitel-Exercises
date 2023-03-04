/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.46:
(Factorial) The factorial of a nonnegative integer n is written n! (pronounced
"n factorial") and is defined as follows:
    n! = n · (n - 1) · (n - 2) · … · 1
    (for values of n greater than or equal to 1)
and
    n! = 1 (for n = 0).
For example, 5! = 5 · 4 · 3 · 2 · 1, which is 120.
    a) Write a program that reads a nonnegative integer and computes and
       prints its factorial.
    b) Write a program that estimates the value of the mathematical constant e
       by using the formula:
                     1      1      1
            e = 1 + ---- + ---- + ---- + ..
                     1!     2!     3!
    c) Write a program that computes the value of e^x by using the formula
                       x     x^2    x^3
            e^x = 1 + ---- + ---- + ---- + ..
                       1!     2!     3!

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-03-03. */

#include <stdio.h>

int main(void)
{
    float x;
    float pow_of_x = 1;
    float euler_x = 1;
    int factorial = 1;
    int i;

    printf("Input the exponent: ");
    scanf("%f", &x);

    for (i = 1; i <= 12; i++)
    {
        factorial = factorial*i;
        pow_of_x = pow_of_x*x;
        euler_x = euler_x + pow_of_x/factorial;
    }

    printf("e^%f = %.15f.\n", x, euler_x);

    return 0;
}
