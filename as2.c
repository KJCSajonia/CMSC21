#include <stdio.h>
int main(void){

// A program that checks who among the three conditional statements differ from one another
	int i; // declaration
	i = 10; // initialization of i to 10

// While Loop:
	
	while (i < 10){
// while i is less than 10, do these:
		printf("%d ", i);
		i += 1;
	}
	printf("\n");

// For Loop:	
	for (; i < 10;  i++){
		printf("%d ",i);
	}
	printf("\n");

// Do While Loop:	

	do{
		printf("%d ", i);
		i += 1;
	}

	while(i < 10);


	return 0;

}