/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.19:
(Sales Commission Calculator) One large chemical company pays its salespeople
on a commission basis. The salespeople receive $200 per week plus 9% of their
gross sales for that week. For example, a salesperson who sells $5000 worth of
chemicals in a week receives $200 plus 9% of $5000, or a total of $650.
Develop a program that will input each salesperson's gross sales for last week
and will calculate and display that salesperson's earnings. Process one
salesperson's figures at a time. Here is a sample input/output dialog:

    Enter sales in dollars (-1 to end): 5000.00
    Salary is: $650.00
    Enter sales in dollars (-1 to end): 1234.56
    Salary is: $311.11
    Enter sales in dollars (-1 to end): 1088.89
    Salary is: $298.00
    Enter sales in dollars (-1 to end): -1

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022-12-16.*/

#include <stdio.h>

int main(void)
{
    float sales; /*Salesperson's gross sales for last week*/
    float earnings; /*Salesperson's earnings for last week*/

    while (sales != -1)
    {
        printf("Enter sales in dollars (-1 to end): ");
        scanf("%f", &sales);
        earnings = 200 + sales*0.09;

        if (sales != -1)
        {
            printf("Salary is: $%.2f\n\n", earnings);
        }
    }

    return 0;
}
