/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.44:
(Sides of a Triangle) Write a program that reads three nonzero float values
and determines and prints if they could represent the sides of a triangle.

Modified by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-03-21.*/

#include <stdio.h>

int main(void)
{
    /*The nonzero float values*/
    float first_value;
    float second_value;
    float third_value;

    /*Enter the three nonzero float values*/
    printf("Enter the first integer: ");
    scanf("%f",&first_value);
    printf("Enter the second integer: ");
    scanf("%f", &second_value);
    printf("Enter the third integer: ");
    scanf("%f", &third_value);

    if ((first_value + second_value > third_value) &&
        (first_value + third_value > second_value) &&
        (second_value + third_value > first_value))
    {
        printf("The values could represent the sides of a triangle.\n");
    }
    else
    {
        printf("The values could no represent the sides of a triangle.\n");
    }

    return 0;
}
