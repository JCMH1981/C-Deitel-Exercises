/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.36:
(Printing the Decimal Equivalent of a Binary Number) Input an integer
containing only 0s and 1s (i.e., a "binary" integer) and print its decimal
equivalent. [Hint: Use the remainder and division operators to pick off the
"binary" number's digits one at a time from right to left. Just as in the
decimal number system, in which the rightmost digit has a positional value of
1, and the next digit left has a positional value of 10, then 100, then 1000,
and so on, in the binary number system the rightmost digit has a positional
value of 1, the next digit left has a positional value of 2, then 4, then 8,
and so on. Thus the decimal number 234 can be interpreted as 4 * 1 + 3 * 10 +
2 * 100. The decimal equivalent of binary 1101 is 1 * 1 + 0 * 2 + 1 * 4 + 1 *
8 or 1 + 0 + 4 + 8 or 13.]

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-01-20.
Modified by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-03-04.
Modified by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-03-20.
*/

#include <stdio.h>

int main(void)
{
    int binary_integer, decimal_equivalent = 0;
    int digit, number;
    int power_of_ten = 1000000000, power_of_two = 1024;

    printf("Input the binary integer (only 0s and 1s): ");
    scanf("%d", &binary_integer);
    number = binary_integer;

    while ((power_of_ten >= 1) && (power_of_two >= 1))
    {
        digit = number / power_of_ten;
        number = number % power_of_ten;
        power_of_ten = power_of_ten / 10;
        power_of_two = power_of_two / 2;
        decimal_equivalent = decimal_equivalent + digit*power_of_two;
    }

    printf("The decimal equivalent of binary %d is %d.\n",
           binary_integer, decimal_equivalent);

    return 0;
}
