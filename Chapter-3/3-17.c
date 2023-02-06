/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.17:
(Gas Mileage) Drivers are concerned with the mileage obtained by their
automobiles. One driver has kept track of several tankfuls of gasoline by
recording miles driven and gallons used for each tankful. Develop a program
that will input the miles driven and gallons used for each tankful. The
program should calculate and display the miles per gallon obtained for each
tankful. After processing all input information, the program should calculate
and print the combined miles per gallon obtained for all tankfuls. Here is a
sample input/output dialog:

    Enter the gallons used (-1 to end): 12.8
    Enter the miles driven: 287
    The miles / gallon for this tank was 22.421875

    Enter the gallons used (-1 to end): 10.3
    Enter the miles driven: 200
    The miles / gallon for this tank was 19.417475

    Enter the gallons used (-1 to end): 5
    Enter the miles driven: 120
    The miles / gallon for this tank was 24.000000

    Enter the gallons used (-1 to end): -1
    The overall average miles/gallon was 21.601423

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022-12-08. */

#include <stdio.h>

int main(void)
{
    float gallons; /*Gallons used for each tankful*/
    float miles; /*Miles driven for each tankful*/
    float sum_of_gallons = 0; /*Gallons used for all tankfuls*/
    float sum_of_miles = 0; /*Miles driven for all tankfuls*/
    float average; /*Overall average miles/gallon*/;

    while (gallons != -1)
    {
        printf("Enter the gallons used (-1 to end): ");
        scanf("%f", &gallons);

        if (gallons != -1)
        {
            printf("Enter the miles driven: ");
            scanf("%f", &miles);
            printf("The miles / gallon for this tank was %f\n\n", miles/gallons);
            sum_of_gallons += gallons;
            sum_of_miles += miles;
        }
    }

    if ((sum_of_gallons != 0) || (sum_of_miles != 0))
    {
        average = sum_of_miles/sum_of_gallons;
        printf("\nThe overall average miles/gallon was %f\n", average);
    }
    else
    {
        printf("No gallons were entered\n");
    }

    return 0;
}
