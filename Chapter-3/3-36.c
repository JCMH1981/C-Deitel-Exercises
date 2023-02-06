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
*/

#include <stdio.h>

int main(void)
{
    int binary_number;
    int decimal_equivalent;

    int first_digit, second_digit, third_digit, fourth_digit;
    int first_remainder, second_remainder, third_remainder;

    printf("Input the binary integer (only 0s and 1s): ");
    scanf("%d", &binary_number);

    first_digit = binary_number/1000;
    first_remainder = binary_number%1000;
    second_digit = first_remainder/100;
    second_remainder = first_remainder%100;
    third_digit = second_remainder/10;
    third_remainder = second_remainder%10;
    fourth_digit = third_remainder;

    decimal_equivalent = first_digit*8 + second_digit*4 + third_digit*2 +
                         fourth_digit;

    printf("The decimal equivalent is %d.\n", decimal_equivalent);

    return 0;
}
