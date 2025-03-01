/**
 * 	@Author :- Aryan Mahesh Ranjane 
 *  @Date	:- 2/3/25 
 * 	@Determine each component of code 
 */ 

 // Header file 
 #include	<stdio.h>
 
 int smaller(int number1, int number2);	/* Function proto-type */ 

 main() 
 {
 	/* Entry point function */

 	/* Variable declaration */
 	int a, b, min, n; 

 	/* print in format How many pairs of number ? with space :- white space */
 	printf("How many pairs of number ? ");
 	/* scan in format :- %d as format specification 
 	   this function also takes MEMORY_LOCATION :- n as arguement 
 	   transfer stdin to MEMORY_LOCATION */ 
 	scanf("%d", &n); 

 	/* For loop with :- count = 0 :- initialization; count < n :- comparision; count++ updation */
 	for(int count = 0; count < n; count++)	{

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

 	/* Storing the return value of smaller function to the variable min */
 	min = smaller(a,b); 

 	/* print in format \n :- new line The smallest number is with format :- %d \n :- new line 
 	   this function also takes arguement of value at MEMORY_LOCATION :- min */
 	printf("\nThe smallest number is %d \n", min); 	
 	
 	}

 }	

 /**
  * function_name :- smaller 
  * return_type   :- integer
  * params 		  :- num1, num2 (int,int)
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