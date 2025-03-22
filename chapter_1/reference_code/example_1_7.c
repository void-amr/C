/**
 * 	@Author :- Aryan Mahesh Ranjane (ranjanearyan82@gmail.com)
 * 	@Date   :- 26/2/25 
 * 	@Demonstration of area of circle using defined approaches in book  
 */ 

// Header Files 
#include <stdio.h>
#define PI 3.14159 

float process(float radius); /* Function proto-type */ 

main() 
{
	// Entry point function 

	float radius, area; 

	printf("Enter radius ?"); /* OUTPUT TO ENTER RADIUS (PROMPT) */ 
	scanf("%f", &radius);  	  /* Taking radius input */ 

	area = process(radius); /* Calling the process function and passing radius as arguemtn (parameter) */   
	printf("Area of circle: %f ",area); 
}

float process(float r) 
{
	// Function definition 
	float a; 
	a = PI * r * r; 
	return (a); 
}