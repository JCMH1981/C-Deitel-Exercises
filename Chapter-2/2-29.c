/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 2.29:
(Integer Value of a Character) Here's a peek ahead. In this chapter you
learned about integers and the type int. C can also represent uppercase
letters, lowercase letters and a considerable variety of special symbols. C
uses small integers internally to represent each different character. The set
of characters a computer uses together with the corresponding integer
representations for those characters is called that computer's character set.
You can print the integer equivalent of uppercase A, for example, by executing
the statement

    printf( "%d", 'A' );

Write a C program that prints the integer equivalents of some uppercase
letters, lowercase letters, digits and special symbols. As a minimum,
determine the integer equivalents of the following: A B C a b c 0 1 2 $ * + /
and the blank character.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018.*/

#include <stdio.h>

int main()
{
    printf("The integer equivalent of A is %d.\n", 'A');
    printf("The integer equivalent of B is %d.\n", 'B');
    printf("The integer equivalent of C is %d.\n", 'C');
    printf("The integer equivalent of a is %d.\n", 'a');
    printf("The integer equivalent of b is %d.\n", 'b');
    printf("The integer equivalent of c is %d.\n", 'c');
    printf("The integer equivalent of 0 is %d.\n", '0');
    printf("The integer equivalent of 1 is %d.\n", '1');
    printf("The integer equivalent of 2 is %d.\n", '2');
    printf("The integer equivalent of $ is %d.\n", '$');
    printf("The integer equivalent of * is %d.\n", '*');
    printf("The integer equivalent of + is %d.\n", '+');
    printf("The integer equivalent of / is %d.\n", '/');
    printf("The integer equivalent of space character is %d.\n", ' ');

    return 0;
}