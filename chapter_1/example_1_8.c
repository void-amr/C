/**
 * 	@Author :- Aryan Mahesh Ranjane
 * 	@Date 	:- 26/2/25 
 * 	@Demonstration of area of circle using function proto-type and definition + error checking 
*/

// Header File

#include <stdio.h> 
#define PI 3.14159 

float process(float radius); /* FUNCTION PROTO-TYPE */ 

main() 
{
	// ENTRY POINT FUNCTION  

	float radius,area; /* VARIABLE DECLARATION */ 
	
	printf("Enter radius = ? "); 
	scanf("%f", &radius); 
	
	/* ERROR CHECKING */ 
	/* VALUE SHOULD BE GREATER THAN 0 */ 

	if(radius < 0)
		area = 0; 
	else 
		area = process(radius); 
	printf("Area of circle : %f", area); 
}

float process(float r) /* FUNCTION DEFINITION */ 
{
	float a; 
	a = PI * r * r;  
	return (a); 
} 
