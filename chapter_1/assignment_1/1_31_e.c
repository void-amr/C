/**
 * 	@Author :- Aryan Mahesh Ranjane 
 *  @Date	:- 2/3/25 
 * 	@Determine each component of code 
 */ 

 // Header file 
 #include	<stdio.h>
 
 int smaller(int number1, int number2); /* Function proto-type */

 main()
 {
 	/* Entry point function */

 	/* Variable declaration */ 
 	int a, b, min; 

 	/* print in format :- Please enter the first number: with space :- whitespace */
 	printf("Please enter the first number: ");
 	/* scan in format :- %d as format specification 
 	   this function also takes MEMORY_LOCATION :- a as arguement 
 	   transfer stdin data to MEMORY_LOCATION */  
 	scanf("%d", &a); 

 	
 	/* print in format :- Please enter the second number: with space :- whitespace */
 	printf("Please enter the second number: ");
 	/* scan in format :- %d as format specification 
 	   this function also takes MEMORY_LOCATION :- b as arguement 
 	   transfer stdin data to MEMORY_LOCATION */  
 	scanf("%d", &b);

 	/* Storing the return type of smaller functin in min variable */
 	min = smaller(a,b); 
  	
  	/* print in format \n :- new line The smaller number is :%d
  	   here arguement points to value of MEMORY_LOCATION :- min
  	*/
  	printf("\n The smaller number is : %d ", min); 
 }

 /* function_name :- smaller 
 	return_type	  :- integer 
 	params 		  :- num1, num2 (int, int)
 */ 

 int smaller(int num1, int num2) /* Function definition */ 
 {	
 	// Sellection statement 
 	if(num1 <= num2)
 		/* True block */
 		return(num1); 
 	else 
 		/* False block */ 
 		return(num2); 
 }