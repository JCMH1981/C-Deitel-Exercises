/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 2.27:
(Checkerboard Pattern of Asterisks) Display the following checkerboard pattern
with eight printf statements and then display the same pattern with as few
printf statements as possible.

* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *
* * * * * * * *
 * * * * * * * *

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018.*/

#include <stdio.h>

int main()
{
    /* With eight printf statements */
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n");
    printf("* * * * * * * *\n");
    printf(" * * * * * * * *\n\n");

    /* Now, with one printf statement */
    printf("* * * * * * * *\n"
           " * * * * * * * *\n"
           "* * * * * * * *\n"
           " * * * * * * * *\n"
           "* * * * * * * *\n"
           " * * * * * * * *\n"
           "* * * * * * * *\n"
           " * * * * * * * *\n");

    return 0;
}
