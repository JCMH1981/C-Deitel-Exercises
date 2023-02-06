/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.21:
(Salary Calculator) Develop a program that will determine the gross pay
for each of several employees. The company pays "straight time" for the
first 40 hours worked by each employee and pays "time-and-a-half" for all
hours worked in excess of 40 hours. You’re given a list of the employees
of the company, the number of hours each employee worked last week and
the hourly rate of each employee. Your program should input this
information for each employee, and should determine and display the
employee's gross pay. Here is a sample input/output dialog:

    Enter # of hours worked (-1 to end): 39
    Enter hourly rate of the worker ($00.00): 10.00
    Salary is $390.00

    Enter # of hours worked (-1 to end): 40
    Enter hourly rate of the worker ($00.00): 10.00
    Salary is $400.00

    Enter # of hours worked (-1 to end): 41
    Enter hourly rate of the worker ($00.00): 10.00
    Salary is $415.00

    Enter # of hours worked (-1 to end): -1

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022-12-22.*/

#include <stdio.h>

int main(void)
{
    int hours; /*Number of hours worked*/
    float rate; /*Hourly rate of the worker*/
    float salary; /*Employee's gross pay*/

    while (hours != -1)
    {
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &hours);

        if (hours != -1)
        {
            printf("Enter hourly rate of the worker ($00.00): ");
            scanf("%f", &rate);

            /*The company pays "straight time"*/
            if (hours <= 40)
            {
                salary = hours*rate;
            }
            /*The company pays "time-and-a-half"*/
            else if (hours > 40)
            {
                salary = 40*rate + 1.5*(hours - 40)*rate;
            }

            printf("Salary is $%.2f\n\n", salary);           
        }        
    }

    return 0;
}
