/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.24: 
(Find the Largest Number) The process of finding the largest number (i.e., 
the maximum of a group of numbers) is used frequently in computer 
applications. For example, a program that determines the winner of a sales
contest would input the number of units sold by each salesperson. The 
salesperson who sold the most units wins the contest. Write a pseudocode 
program and then a program that inputs a series of 10 numbers and 
determines and prints the largest of the numbers.
[Hint: Your program should use three variables as follows]:

    counter:    A counter to count to 10 (i.e., to keep track of how many 
                numbers have been input and to determine when all 10 numbers 
                have been processed)
    number:     The current number input to the program
    largest:    The largest number found so far

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2022-12-23.*/

#include <stdio.h>

int main(void)
{
    int counter; /*A counter to count to 10*/
    int number; /*The current number input to the program*/
    int largest; /*The largest number found so far*/

    printf("Input the series of 10 numbers: ");
    counter = 1;
    
    while (counter <= 10)
    {
        scanf("%d", &number);
        
        if (number > largest)
        {
            largest = number;
        }
        
        counter = counter + 1;        
    }

    printf("The largest number is %d.\n", largest);

    return 0;
}
