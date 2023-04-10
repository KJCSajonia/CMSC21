#include <stdio.h>

int main (void)
{
	/* A program that shows the different way of using printf to format numbers*/

	//declaring the variable types for each variables
	int i;
	float x;

	i = 40;
	x = 839.21f; //characterizing the number as a float using f
// The '|' symbol was used for display purposes only, it will show the number of spaces of different printing formats.

	printf("|%d|%5d|%-5d|%5.3d| \n", i, i, i, i); 
	/* %d -yields no space, printing the exact number of characters of the inputted number 
	   %5d -yields i in decimal form using 5 characters, three spaces were added before the number 40 to get a total of 5 characters since we input 5 in the %d
	   %-5d -displays i decimal form, using a minimum of 5 characters, three spaces were added after the number 40 (due to the '-')
	   %5.3d -shows i in decimal form, using 5 characters, adding an additional 0 in front of 40, so that it will 
	   have three digits (due to the .3d). Also 2 spaces were added before the 040 so that it will have a total of 5 characters. */	
	

	printf("|%10.3f|%10.3e|%-10g|\n ", x, x, x);
/*     %10.3f -prints x in a fixed decimal form, having a total of 10 characters, including the '.', the three spaces before the given number, 
	   and the additional 0 after it. 0 was added after the .21 because it was specified that the digits in the decimal place must have a total number
	   of 3 digits.
	   %10.3e -prints x in an exponential form, having 10 characters, including the e+002, there was no space added because the program prints
	   8.392e+002 which has 3 digits after the exponential sign,  instead of printing 8.392e+02, which only consits of 2 digits after the e+.
	   %-10g -prints x in a fixed decimal form, having 10 characters, including the decimal point and the four spaces after the given number since it only had 
	   6 characters and was justified to the left because of the '-'. */

	/* 
	   output: 
	   |40|   40|40   |  040|
	   |   839.210|8.392e+002|839.21    | 
	*/
	return 0;
}
