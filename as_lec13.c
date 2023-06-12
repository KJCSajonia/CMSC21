// CMSC 21 Lecture 13 (Structures) Assignment
// Kezia Judith C. Sajonia
// 2022-12963


#include<stdio.h>
#include<math.h>

// structure named line to be used to solve the slope, midpoint, distance, and slope-intercept form of the line
struct line{
	struct point{ // structure named point to store the x1, y1, x2, and y2 of the line.
		float x;
		float y;
	}point1, point2; // point1 for x1 and y1; point2 for x2 and y2
	float *midpoint; // points to the address of x and y in midpoint function
	float slope; // stores the values from solveSlope function
	float distance; // stores the values from solveDistance function
};

//Function Declarations:
float solveSlope(struct line line1);
float *solveMidpointx(struct line line1);
float *solveMidpointy(struct line line1);
float solveDistance(struct line line1);
void getSLopeInterceptForm(struct line line1);


int main(){
	struct line line1; // declaring the stucture

	printf("Enter x and y for point1: \n");
	scanf("%f %f", &line1.point1.x, &line1.point1.y); // initializing x and y in the structure point1 inside the structure line1.

	printf("Enter x and y for point2: \n");
	scanf("%f %f", &line1.point2.x, &line1.point2.y); // initializing x and y in the structure point2 inside the structure line1.



// Printing the slope of the line:
	printf("Slope: %f ",solveSlope(line1));

	printf("\n");

//Printing the Midpoint:
	
	printf("Midpoint: (%f, %f) ", *solveMidpointx(line1), *solveMidpointy(line1)); // *solveMidpointx(line1) access the value of the midpoint of x by getting its value from the returned address in its function
																		         // *solveMidpointy(line1) access the value of the midpoint of y by getting its value from the returned address in its function

	printf("\n");

// Printing the distance between the points:
	printf("Distance between two points: %f ",solveDistance(line1));

	printf("\n");

// Showing the Slope-intercept Form
	getSLopeInterceptForm(line1);
	
}

float solveSlope(struct line line1){
	//initializing the slope:
	line1.slope = ((line1.point1.y)-(line1.point2.y)) / ((line1.point1.x)-(line1.point2.x)); //Formula: ((y1 - y2)/(x1-x2))
	float slope = line1.slope; // getting the value of the calculated slope
	return slope; // returning its value to the function

	
}

float *solveMidpointx(struct line line1){ 
	*line1.midpoint = (((line1.point1.x)+(line1.point2.x))/2); // solving the value of x's midpoint; points to the midpoint variable of line1
	float *midpoint_x = line1.midpoint; // gets the address of the midpoint from the midpoint variable in line 1 
	return midpoint_x; // return the address of midpoint_x to solveMidpointx function
}
float *solveMidpointy(struct line line1){
	*line1.midpoint = (((line1.point1.y)+(line1.point1.y))/2);	// solving using the formula: ((y1+y2)/2) and initializing the midpoint of y; points to the midpoint variable of line1
	float *midpoint_y = line1.midpoint; // gets the address of the midpoint from the midpoint variable in line 1 
	return midpoint_y; // return the address of midpoint_y to solveMidpointy function

}


float solveDistance(struct line line1){
	//Solving the distance between the points using the formula: sqrt(((x1-x2)^2) + ((y1-y2)^2))
	float ans_x, x_2, ans_y, y_2;
	ans_x = ((line1.point1.x)-(line1.point2.x)); //(x1 - x2)
	x_2 = ans_x * ans_x; 
	ans_y = ((line1.point1.y)-(line1.point2.y)); //(y1 - y2)
	y_2 = ans_y * ans_y;
	 
	line1.distance = sqrt((x_2)+(y_2));
	float distance = line1.distance; // getting the value of the calculated distance
	return distance; // returning its value to its function

 }

void getSLopeInterceptForm(struct line line1){
	float b = ((line1.point1.y) - ((solveSlope(line1))*(line1.point1.x))); // solving for the value of b in y = mx +b; b = y1 - m*x1
	printf("Slope Intercept Form: y = %fx + (%f)", solveSlope(line1), b); // printing the slope-intercept form of the line
}
