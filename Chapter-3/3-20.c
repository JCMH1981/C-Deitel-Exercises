/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.20:
(Interest Calculator) The simple interest on a loan is calculated by the
formula

    interest = principal * rate * days / 365;

The preceding formula assumes that rate is the annual interest rate, and
therefore includes the division by 365 (days). Develop a program that will
input principal, rate and days for several loans, and will calculate and
display the simple interest for each loan, using the preceding formula.
Here is a sample input/output dialog:

    Enter loan principal (-1 to end): 1000.00
    Enter interest rate: .1
    Enter term of the loan in days: 365
    The interest charge is $100.00
    Enter loan principal (-1 to end): 1000.00
    Enter interest rate: .08375
    Enter term of the loan in days: 224
    The interest charge is $51.40
    Enter loan principal (-1 to end): 10000.00
    Enter interest rate: .09
    Enter term of the loan in days: 1460
    The interest charge is $3600.00
    Enter loan principal (-1 to end): -1

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022-12-21.*/

#include <stdio.h>

int main(void)
{
    float principal; /*Loan principal*/
    float rate; /*Annual interest rate*/
    int days; /*Term of the loan in days*/
    float interest; /*Simple interest in a loan*/

    while (principal != -1)
    {
        printf("Enter loan principal (-1 to end): ");
        scanf("%f", &principal);

        if (principal != -1)
        {
            printf("Enter interest rate: ");
            scanf("%f", &rate);
            printf("Enter term of the loan in days: ");
            scanf("%d", &days);
            interest = principal*rate*days/365;
            printf("The interest charge is $%.2f\n\n", interest);
        }
    }

    return 0;
}
