#include<stdio.h>

int main(void){
	// A program that computes for the power of two:
	int power_num, num;
	
	printf("TABLE OF POWERS OF TWO \n");
	printf("n     2 to the n\n");
	printf("---   ----------\n");

// from numbers 0  to 10:
	for(num = 0; num <= 10; num++){
// for number 0, its equivalent power of 2 is 1
		if(num == 0){
			printf("%2d       %d ", num, num+1); //output: 0          1
			printf("\n");}

// Power of 2:
		power_num = 1;

		while (num < 10){ // number of 2s (1 = one 2, 2 = two 2s, ...)
			power_num *= 2; // (power_num * 2) 
			num += 1; //increment the value of num

		// // print the computation:
		printf("%2d       %d", num,  power_num);
		printf("\n"); 
		}


	
		
	}

	return 0;
}