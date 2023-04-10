#include <stdio.h>

int main(void)
{
	/*computes for the sum of two fractions */
	
	// equation: num1/denom1 + num2/denom2
	/*num1 - 1st numerator
	  denom1 - 1st denominator
	  num2 - second numerator 
	  denom2 - second denominator*/


	int num1, denom1, num2, denom2, result_num, result_denom;
     
    // the user must input n/d to make the input valid
    //example: 1/2
	printf("Enter first fraction: "); //prompts the user to enter the first fraction
	scanf("%d/%d", &num1, &denom1 ); // reads the user input from the stored values in num1 and denom1

	printf("Enter the second fraction: "); // prompts the user to enter the second fraction
	scanf("%d/%d", &num2, &denom2); // reads the user input from the stored values in num2 and denom2

	/* to get the value for the numerator, you must multiply the 1st numerator to the 2nd denominator and 
	then multiply the 2nd numerator to the 1st denominator, after that, add the products */
	result_num = (num1 * denom2) + (num2 * denom1);

	// to get the value for the denominator, multiply the 1st and 2nd denominator
	result_denom = denom1 * denom2;

	//outputs the sum in the form of n/d
	printf("The sum is %d/%d \n", result_num, result_denom);

	return 0;
}