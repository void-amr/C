/**
 * 	@Author :- Aryan Mahesh Ranjane (ranjanearyan82@gmail.com)
 * 	@Date   :- 25/2/25 
 * 	@Breif  :- Demonstration of simple C program and it's structure. 
 */ 


/* program to calculate the area of a circle */ 

#include <stdio.h>							/* LIBRARY FILE ACCESS */

main() 									   /* FUNCTION HEADING */ 
{
	float radius, area;					 /* VARABLE DECLARATION */ 

	printf("Radius: ? "); 				/* OUTPUT STATEMENT (PROMPT) */ 
	scanf("%f", &radius); 			   /* INPUT STATEMENT */  	
	area = 3.14159 * radius * radius; /* ASSIGNMENT STATEMENT */ 
	printf("Area: %f", area);		 /* OUTPUT STATEMENT */ 
}