/*C How to Program, 6/E, Deitel & Deitel.
   
Solution of exercise 3.35:
(Palindrome Tester) A palindrome is a number or a text phrase that reads the 
same backward as forward. For example, each of the following five-digit 
integers is a palindrome: 12321, 55555, 45554 and 11611. Write a program that 
reads in a five-digit integer and determines whether or not it's a palindrome. 
[Hint: Use the division and remainder operators to separate the number
into its individual digits.]

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-01-16 */

#include <stdio.h>

int main(void)
{
    int number, inverted_number;
    int first_digit, second_digit, third_digit, fourth_digit, fifth_digit;
    int first_remainder, second_remainder, third_remainder, fourth_remainder;

    printf("Enter the number: ");
    scanf("%d", &number);

    first_digit = number / 10000;
    first_remainder = number % 10000;
    second_digit = first_remainder / 1000;
    second_remainder = first_remainder % 1000;
    third_digit = second_remainder / 100;
    third_remainder = second_remainder % 100;
    fourth_digit = third_remainder / 10;
    fourth_remainder = third_remainder % 10;
    fifth_digit = fourth_remainder;

    inverted_number = fifth_digit*10000 + fourth_digit*1000 + 
                      third_digit*100 + second_digit*10 + first_digit;

    /*It tests whether or not the number is a palindrome*/
    if (inverted_number == number)
    {
        printf("The number is a palindrome.\n");
    }
    else
    {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}