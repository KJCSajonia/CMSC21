#include <stdio.h>

int main()
{
	/* assigns an integer value to i and j */
	int i, j;
	/* assigns a float value to x and y */ 
	float x, y;

	/*setting the values for i, j, x, and y*/ 

	i = 10;
	j = 20;
	x = 43.2892f; /* the letter f determines that the inputted value is a float. */
	y = 5537.0f;

	/*prints the  designated assigned values to i, j, x, and y */
	/* %d is used to print an int value and %f to print a float value*/

	printf("i = %d, j = %d, x = %f, y =%f\n", i, j, x, y); // \n creates a new line
	//prints: i = 10, j = 20, x = 43.289200, y =5537.000000
	// the numbers in x and y have a fixed number of 6 characters after the decimal point.

}