/*C How to Program, 6/E, Deitel & Deitel.

Solution of exercise 2.32:
(Body Mass Index Calculator) We introduced the body mass index (BMI) 
calculator in Exercise 1.11. The formulas for calculating BMI are

                weightInPounds x 703    
    BMI = ---------------------------------
           heightInInches x heightInInches

or
                  weightInKilograms    
    BMI = ---------------------------------
           heightInMeters x heightInMeters

Create a BMI calculator application that reads the user's weight in pounds and 
height in inches (or, if you prefer, the user's weight in kilograms and height 
in meters), then calculates and displays the user's body mass index. Also, the 
application should display the following information from the Department of 
Health and Human Services/National Institutes of Health so the user can 
evaluate his/her BMI:

    BMI VALUES
    Underweight: less than 18.5
    Normal:      between 18.5 and 24.9
    Overweight:  between 25 and 29.9
    Obese:       30 or greater

[Note: In this chapter, you learned to use the int type to represent whole 
numbers. The BMI calculations when done with int values will both produce 
whole-number results. In Chapter 4 you'll learn to use the double type to 
represent numbers with decimal points. When the BMI calculations are performed 
with doubles, they'll both produce numbers with decimal points—these are 
called "floating-point" numbers.]

Written by Juan Carlos Moreno (jcmhsoftware@gmail.com), year 2018.*/

#include <stdio.h>

int main()
{
	int weight_in_kilos;
	int height_in_meters;
	int BMI;

	printf("Input the weight in kilograms: ");
	scanf("%d", &weight_in_kilos);
	printf("Input the height in meters: ");
	scanf("%d", &height_in_meters);

	/*Calculation and display of the BMI*/
	BMI = weight_in_kilos/(height_in_meters*height_in_meters);
	printf("The Body Mass Index Calculator (BMI) is %d\n", BMI);

	/*BMI VALUES*/
	printf("BMI VALUES\n");
	printf("Underweight:\tless than 18.5\n");
	printf("Normal:\tbetween 18.5 and 24.9\n");
	printf("Overweight:\tbetween 25 and 29.9\n");
	printf("Obese:\t30 or greater\n");

	return 0;
}