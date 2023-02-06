/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.38:
Write a program that prints 100 asterisks, one at a time. After every tenth
asterisk, your program should print a newline character. [Hint: Count from 1
to 100. Use the remainder operator to recognize each time the counter reaches
a multiple of 10.]

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018.*/

#include <stdio.h>

int main(void)
{
    int i = 1; /*Counter*/

    while (i <= 100) /*100 asterisks are printed*/
    {
        printf("%c", '*'); /*Print an asterisk*/

        if (i % 10 == 0)
        {
            printf("\n"); /*print a newline character*/
        }

        i++; /*Increment counter*/
    }

    return 0;
}