/**
 * 	@Author :- Aryan Mahesh Ranjane 
 *  @Date	:- 2/3/25 
 * 	@Determine each component of code 
 */ 

 // Header file 
 #include	<stdio.h>

 main() 
 {
 	/* Entry point function */

 	/* Variable declaration */
 	float base, height, area; 

 	/* Print in format :- Base with space:- White space charachter */
 	printf("Base: "); 
 	/* Scan in format with %f as format specification and a arguement which points to MEMORY_LOCATION of base 
 	*/ 
 	scanf("%f", &base); 
 	/* Print in format :- Height with space :- White space character */
 	printf("Height: ");
 	/* Scan in format with %f as format specification and a arguement which points to MEMORY_LOCATION of height */
 	scanf("%f", &height); 

 	/* Calculation of area */
 	area = (base * height) /2.; /* First values will be multiplied and then divided */
 	/* Print in format :- %f :- area, and arguement :- area points to the value at the MEMORY_LOCATION :- area */
 	printf("Area: %f", area);  
 }