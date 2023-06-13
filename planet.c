// CMSC 21 Lecture 12 (Strings) Reading Assignment
// Kezia Judith C. Sajonia
// 2022-12963


#include <stdio.h> 
#include <string.h> 
#define NUM_PLANETS 9 

//command line argumments 
int main(int argc, char *argv[]) // argc points to the number of arguments 
								 // *argv[] points to each of the parameters that was passed in the program.
								 // In here, the number of inputted strings indicates the number of arguments and the *argv[] serves as an array of characters for the inputted string. 
{ 

char *planets[] = {"Mercury", "Venus ", "Earth", 
					"Mars", "Jupiter", "Saturn", 
					"Uranus", "Neptune", "Pluto"}; 
int i, j; 

for (i = 1; i < argc; i++) { // argc is the number of characters inputted by the user 
	for (j = 0; j < NUM_PLANETS; j++) 
		if (strcmp(argv[i], planets[j]) == 0) {  // if every index of argv[i] == planets[j] == 0,
			printf(" %s is planet %d\n", argv[i], j + 1); // then print that it is a planet and print the order of that planet. ex: input: Jupiter; "Jupiter is a planet 5"; 5 indicates its index in planets[] + 1.
			break; 
} 
	if (j == NUM_PLANETS) // if the inputted word is equal to the size of the words in *planets[] as they are being compared, then it is not a planet
		printf("%s is not a planet\n", argv[i]); 
}
return 0;
}