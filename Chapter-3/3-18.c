/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.18:
(Credit Limit Calculator) Develop a C program that will determine if a
department store customer has exceeded the credit limit on a charge account.
For each customer, the following facts are available:
    a) Account number
    b) Balance at the beginning of the month
    c) Total of all items charged by this customer this month
    d) Total of all credits applied to this customer's account this month
    e) Allowed credit limit
The program should input each of these facts, calculate the new balance
(= beginning balance + charges – credits), and determine if the new balance
exceeds the customer's credit limit. For those customers whose credit limit is
exceeded, the program should display the customer's account number, credit
limit, new balance and the message "Credit limit exceeded." Here is a sample
input/output dialog:

    Enter account number (-1 to end): 100
    Enter beginning balance: 5394.78
    Enter total charges: 1000.00
    Enter total credits: 500.00
    Enter credit limit: 5500.00
    Account:        100
    Credit limit:   5500.00
    Balance:        5894.78
    Credit limit Exceeded.

    Enter account number (-1 to end): 200
    Enter beginning balance: 1000.00
    Enter total charges: 123.45
    Enter total credits: 321.00
    Entercredit limit: 1500.00

    Enter account number (-1 to end): 300
    Enter beginning balance: 500.00
    Enter total charges: 274.73
    Enter total credits: 100.00
    Enter credit limit: 800.00
    Enter account number (-1 to end): -1

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022-12-15. */

#include <stdio.h>

int main(void)
{
    int account_number; /*Account number*/
    float beginning_balance; /*Balance at the beginning of the month*/
    float charges; /*Total of items charged by this customer this month*/
    float credits; /*Total of credits applied to this customer this month*/
    float credit_limit; /*Allowed credit limit*/
    float new_balance; /*New balance*/

    while (account_number != -1)
    {
        printf("Enter account number (-1 to end): ");
        scanf("%d", &account_number);

        if (account_number != -1)
        {
            printf("Enter beginning balance: ");
            scanf("%f", &beginning_balance);
            printf("Enter total charges: ");
            scanf("%f", &charges);
            printf("Enter total credits: ");
            scanf("%f", &credits);
            printf("Enter credit limit: ");
            scanf("%f", &credit_limit);

            new_balance = beginning_balance + charges - credits;

            if (new_balance > credit_limit)
            {
                printf("Account:\t%d\n", account_number);
                printf("Credit limit:\t%.2f\n", credit_limit);
                printf("Balance:\t%.2f\n", new_balance);
                printf("Credit limit exceeded.\n");
            }

            printf("\n");
        }
    }

    return 0;
}
