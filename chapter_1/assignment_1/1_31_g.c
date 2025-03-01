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

 	/* print in format To Stop enter 0 with space :- white space character */ 
 	printf("To Stop enter 0 ");

 	/* print in format :- Please enter the first number with space :- whitespace */ 
 	printf("Please enter the first number: "); 
 	/* scan in format :- %d as format specification 
 	   this function also takes MEMORY_LOCATION :- a as arguement 
 	   transfer stdin data to MEMORY_LOCATION */  
 	scanf("%d", &a); 

 	/* print in format :- \n :- newline Please enter the second number with space :- whitespace */
 	printf("\nPlease enter the second number: ");
 	/* scan in format :- %d as format specification 
 	   this function also takes MEMORY_LOCATION :- b as arguement 
 	   transfer the stdin data to MEMORY_LOCATION */ 
 	scanf("%d", &b); 
	
	while(a != 0 || b != 0)	{
	/* While loop with conditioning */ 
		min = smaller(a,b); 
		/* print in format The smallest number is %d :- format \n :- new line
		   this function also takes value at MEMORY_LOCATION :- min as arguement */ 
		printf("The smallest number is %d\n", min);

		/* print in format :- Please enter the first number with space :- whitespace */ 
 		printf("Please enter the first number: "); 
 		/* scan in format :- %d as format specification 
 	       this function also takes MEMORY_LOCATION :- a as arguement 
 	   	   transfer stdin data to MEMORY_LOCATION */  
 		scanf("%d", &a); 

 		/* print in format :- \n :- newline Please enter the second number with space :- whitespace */
 		printf("\nPlease enter the second number: ");
 		/* scan in format :- %d as format specification 
 	   	   this function also takes MEMORY_LOCATION :- b as arguement 
 	       transfer the stdin data to MEMORY_LOCATION */ 
 		scanf("%d", &b); 
 	} 
 }

 /* function_name :- smaller 
 	return_type	  :- integer
 	params		  :- num1, num2 (int, int)
 */ 

 int smaller(int num1, int num2)	/* Function definition */
 {
 	/* Selection statement */
 	if(num1 <= num2)
 		/* True block */
 		return(num1);
 	else 
 		/* False block */
 		return(num2); 
 }