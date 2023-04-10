#include <stdio.h>
// Macro definitions of the size of the adjacency matrix
#define SIZE 8
#define SIZE_ROAD_NETWORKS ((int)(sizeof(road_networks) / sizeof(road_networks[0]))) 

// Macro definition of the size of the points matrix
#define SIZE_POINTS ((int)(sizeof(points) / sizeof(points[0])))


int main(void){

	int point, location, row, column;
	char points[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'}; // array of points for printing
	char stations[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}; // array of points / stations in lower case for printing-

//Declaring and initializing a road_networks multidimensional array that represents the adjacency matrix

	int road_networks[SIZE][SIZE] = { 
		{1, 1, 0, 0, 0, 1, 0, 0},
		{1, 1, 1, 0, 0, 0, 0, 0},
		{0, 1, 1, 0, 1, 1, 0, 0},
		{0, 0, 0, 1, 1, 0, 0, 0},
		{0, 0, 0, 1, 1, 0, 0, 0},
		{1, 0, 1, 0, 0, 1, 0, 0},
		{1, 0, 0, 1, 0, 0, 1, 0},
		{0, 0, 0, 0, 0, 1, 0, 1}

		};

// Displaying the adjacency matrix:

// Column label:
	printf("      a    b   [c]  [d]   e    f    g    h\n");

// Row label:	
	for(row = 0; row < SIZE_ROAD_NETWORKS; row++){ 
		for(column = 0; column < SIZE_ROAD_NETWORKS; column++){
			if((row == 2 || row == 3) && (column == 0)){ // on rows 2 and 3 and column 0
				printf("[%c]", stations[row]); // print the charging stations
			}

			else if(column == 0){ // on rows 0, 1, 4, 5, 6, 7 and column 0
				printf(" %c ", stations[row]); // print the normal stations
			
			}

			printf("%4d ", road_networks[row][column]);
			
		}
		printf("\n");
	}	


//Given a point / destination 
	//Prompts the user to enter the points in integers
	printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H \n");
	scanf("%d", &point);

// If point is greater than 8 or less than 0:
	while ((point > 8) || (point < 0)){
		printf("Invalid input\n"); // tell the user that it is an invalid input
		//repeat until the input is correct
		printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H \n");
		scanf("%d", &point);
	}

//Determine the nearest charging station:
    printf("At point: %c \n", points[point]);
    switch(point){ 
    // if the inputted point is at 0, 1, 5, or 7 then C is the charging point
		case 0:
		case 1:	
		case 5:
		case 7:	
			printf("point: C arrived to charging station\n");	
			break;
		// Charging stations:
		case 2:
			printf("C is a charging station\n");
			break;
		case 3:
			printf("D is a charging station\n");
			break;
		// Inputted point at 4 and 6, D is the charging station
		case 4:
		case 6:
			printf("point: D arrived to charging station\n");
			break;
		}

	
	
return 0;

}