/**
 * 	@Author :- Aryan Mahesh Ranjane 
 *  @Date	:- 2/3/25 
 * 	@Determine each component of code 
 */ 

 // Header file 
 #include <stdio.h>
 
 int smaller(int number1, int number2);	/* Function proto-type */

 main()
 {
 	/* Entry point function */

 	/* Variable declaration */
 	/* Here we have declared a array of 100 elements for a,b and min variables which is of type 
 	   int */ 
 	int a[100], b[100], min[100];
 	int i = 0, n;
 	
 	/* print in format TO stop enter 0 for each number space :- whitespace */ 
 	printf("TO stop enter 0 for each number "); 

 	/* print in format :- \n :- new line Please enter the first number with space :- whitespace */ 
 	printf("\nPlease enter the first number: "); 

 	/* scan in format :- %d as format specification 
 	   this function also takes MEMORY_LOCATION :- a[i] as arguement 
 	   transfer stdin data to MEMORY_LOCATION */  
 	scanf("%d", &a[i]); 

 	/* print in format :- \n :- newline Please enter the second number with space :- whitespace */
 	printf("\nPlease enter the second number: ");
 	
 	/* scan in format :- %d as format specification 
 	   this function also takes MEMORY_LOCATION :- b[i] as arguement 
 	   transfer the stdin data to MEMORY_LOCATION */ 
 	scanf("%d", &b[i]);

 	while(a[i] != 0 || b[i] != 0)	{
 		/* While loop with conditionals */

 		/* Storing return value of function smaller in variable min[i] */
 		min[i] = smaller(a[i], b[i]); 
 	
 		/* print in format \n :- new line The smallest number is %d :- format \n :- new line  
 		   this function also takes value stored at MEMORY_LOCATION :- min[i] as arguement */  
 		printf("\nThe smallest number is %d", min[i]); 		

 		/* Incrementing the index of array to store new data set */ 
 		i = i + 1; 
 		
 		/* print in format Index ic count : %d :- format \n :- new line 
 		   this function also takes value stored at MEMORY_LOCATION :- i */ 
 		printf("\nIndex ic count: %d\n", i);

 		/* print in format :- Please enter the first number space :- whitespace */
 		printf("\nPlease enter the first number "); 
 		
 		/* scan in format :- %d as format specification
 		   this function also takes MEMORY_LOCATION :-a[++i] as arguement 
 		   transfers the stdin data to MEMORY_LOCATION */ 
 		scanf("%d", &a[i]);

 		/* print in format \n :- newline Please enter the second number space :- white space */
 		printf("\nPlease enter the second number "); 
 		
 		/* scan in format :- %d as format specification 
 		   this function also takes MEMORY_LOCATION :- b[++i] as arguement 
 		   transfers the stdin data to MEMORY_LOCATION */
 		scanf("%d", &b[i]); 
 	} 

 	n = --i;	/* Tags the relevant array index */

 	/* For loop with initialization :- le = 0 comparision statement with tag n and updation */
 	for(int le = 0; le <=n; le++)	{
 		/* print in format \n :- new line The smaller number between %d %d is %d\n :- newline 
		   this function also takes values stored at MEMORY_LOCATIONS :- a[le], b[le] and min[le] as arguement
 		*/ 
 		printf("\nThe smaller number between %d and %d is %d\n", a[le], b[le], min[le]); 
 	}
 }

 /* 
 	function_name :- smaller 
 	return_type	  :- integer
 	params 		  :- num1, num2 (int, int)
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