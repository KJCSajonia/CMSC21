// CMSC 21 Lecture 12 (Strings) Reading Assignment
// Kezia Judith C. Sajonia
// 2022-12963


#include <stdio.h> 
#include <String.h>
#define MAX_REMIND 50 
#define MSG_LEN 60

int read_line(char str[], int n);

int main(void) 
{ 

char reminders[MAX_REMIND] [MSG_LEN+3]; // 50x63 array for the inputted reminders with the total of 50 entries and 63 inputted characters including the days and '\0'
char day_str[3], msg_str[MSG_LEN+1]; // day_str[3] for the day and msg_str[MSG_LEN+1] for the reminders 
int day, i, j, num_remind = 0; 

for ( ; ; ) { // an infinite loop

if (num_remind == MAX_REMIND) {  // if the count of the entries reaches 50, break
printf ( "-- No space left -- \n " ); 
break; 
} 

printf( "Enter day and reminder: "); // prompts the user to enter the day and reminder
scanf ( "%2d", &day) ; // getting the day in int
if (day== 0) // if the inputted day == 0, then break the program
	break; 

sprintf(day_str, "%2d", day); // sprintf converts the int into a string 
read_line(msg_str, MSG_LEN); // calling the function to read the inputted reminders

//Organizes the schedule/reminders from the least day to the largest day

// searches the day to place it where it belongs
for (i = 0; i < num_remind; i++) 
	if (strcmp(day_str, reminders[i]) < 0) // if there are no longer similar days, break
		break; // 

//Puts the days in order. moving all strings below a specified day so that a similar day can insert
for (j = num_remind; j > i; j--) 
	strcpy(reminders[j], reminders[j-1]); // sets the day in order by copying the similar day on the specified day

//copies the specified day below the similar day
strcpy(reminders[i], day_str); 
// concatenate the reminder attached to the day
strcat(reminders[i], msg_str); 
num_remind++; 


// Priting the schedule
}
printf ("\nDay Reminder\n "); 
for (i = 0; i < num_remind; i++) 
	printf(" %s\n", reminders[i]); 

return 0; 
}


// function that gets the day and reminder inputs from the user
int read_line(char str[], int n) 
{ 

int ch, i = 0; 
while ((ch= getchar()) != '\n') // while the user does not enter a newline
	if (i < n) // n is based on the MSG_LEN
		str[i++] = ch; //append the array as the user input a character
str[i] = '\0'; // terminates the loop

return i; 
}

