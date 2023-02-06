/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.47:
(World Population Growth Calculator) Use the web to determine the current
world population and the annual world population growth rate. Write an
application that inputs these values, then displays the estimated world
population after one, two, three, four and five years.

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018. */

#include <stdio.h>

int main(void)
{
    long world_population; /*Current world population*/
    double growth_rate; /*Annual world population growth rate*/
    int years_counter; /*Counter of years*/

    printf("Enter the current world population: ");
    scanf("%ld", &world_population);
    printf("Enter annual world population growth rate: ");
    scanf("%lf", &growth_rate);

    years_counter = 1;
    while (years_counter <= 5)
    {
        world_population += growth_rate*world_population/100;
        printf("After %d years the estimated world population will be %ld.\n",
               years_counter, world_population);
        years_counter++;
    }

    return 0;
}