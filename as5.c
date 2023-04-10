#include <stdio.h>
int main(void){
	// variables assigned as integers
	int days, starting_day; 
	int i, j; 
	
	// prompts the user to enter the number of days in a month
	   printf("Enter number of days in month: \n");
		scanf("%d", &days); // reads the inputted integer and writes on days

	// if the days are greater than 31 or less than 28, repeat until the value is correct	
		while ((days > 31 || days < 28)){
			printf("Invalid date\n"); // tell the user that it is an invalid date.
			printf("Enter number of days in month: \n");
			scanf("%d", &days);}
	
	// prompts the user to enter the starting day of the week
		printf("Enter the starting day of the week (1 = Sun, 7 = Sat): ");
		scanf("%d", &starting_day); // reads the inputted integer and writes on starting_day

	// if the starting_day is greater than 7 or less than or equal to 0, repeat until the value is correct
		while ((starting_day > 7 || starting_day <= 0)){
			printf("Invalid date\n");
			printf("Enter the starting day of the week (1 = Sun, 7 = Sat): ");
			scanf("%d", &starting_day);}

// Printing the calendar:	
	for(i = 1; i < starting_day; i++){ // iteration of 1 to starting_day - 1
	// prints the number of spaces based on the number of iterarion, also responsible for the indention.	
		printf("   ");} // three character spaces
		

	for(j = 1; j <= days; j++){ // for day 1 to the last day of the month
		printf("%3d", j);	// print the number of days in 3 character spaces
		if(((i-1)+j) % 7 == 0 ){ // if the number of days is equal to 7, 
			printf("\n");	// print a new line
			}
		}	
	return 0;	
}