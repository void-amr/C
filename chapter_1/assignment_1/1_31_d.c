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
 	float gross, tax, net; 

 	/* print in format :- Gross Salaary with space :- White space */ 
 	printf("Gross Salary "); 
 	/* scan in format with %f :- format specification of foramt and it takes a arguement to store the 
 	   stdin data to MEMORY_LOCATION :- gross */ 
 	scanf("%f", &gross); 
 	/* Calculating tax */
 	tax = 0.14 * gross;
 	/* Calculating net salary */ 
 	net = gross - tax; 
 	/* print in format :- %.2f :- this prints the [decimal][.(delimeter)][fraction(points) upto 2] 
 	for :- net floating variable */ 
 	printf("Net salary:- %.2f", net); 
 }