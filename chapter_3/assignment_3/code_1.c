/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com>
 * 	@Date	:- 14'/3/25 
 */ 
 
 // Header file 
 #include <stdio.h>
	
 
 int sum(int, int); 			/* Function-proto-type */
 int difference(int, int); 		/* Function-proto-type */  

 int main(void)
 {
 	// Entry point function. 

 	/* Data declaration */ 
 	int user_input1;						
 	int user_input2; 						

 	printf("Enter 2 numbers: ");
 	scanf("%d %d",&user_input1, &user_input2);  

 	printf("\nSum of two numbers: %d",sum(user_input1, user_input2)); 
 	printf("\nDifference of two numbers: %d",difference(user_input1, user_input2));

 	return 0; 
 }

 /**
  * 	Function definition. 
  * 
  * function_identifier	:- sum
  * function_parameters	:- integer, integer 
  * function_return_type:- integer
  * 
  */

  int sum(int n1, int n2)
  {
  	return n1 + n2; 
  }

  /**
   * 	Function definition 
   * 
   * function_identifier :- difference
   * function_parameters :- integer, integer
   * function_return_type:- integer
   * 
   */

  int difference(int n1, int n2)
  {
  	return n1 - n2;
  }