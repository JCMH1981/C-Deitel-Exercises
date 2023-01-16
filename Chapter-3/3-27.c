/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 3.27: 
(Find the Two Largest Numbers) Using an approach similar to Exercise 3.24, 
find the two largest values of the 10 numbers. [Note: You may input each 
number only once.]

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), 2023-01-16.*/

#include <stdio.h>

int main(void)
{
    int counter; /*A counter to count to 10*/
    int number; /*The current number input to the program*/
    int first_largest; /*The first largest number found so far*/
    int second_largest; /*The second largest number found so far*/

    printf("Input the series of 10 numbers: ");
    counter = 1;
    
    while (counter <= 10)
    {
        scanf("%d", &number);
        
        if (number > first_largest)
        {
            second_largest = first_largest;
            first_largest = number;
        }
        else if (number > second_largest)
        {
            second_largest = number;
        }

        counter = counter + 1;        
    }

    printf("The two largest numbers are %d and %d.\n", 
           second_largest, first_largest);
    
    return 0;
}
