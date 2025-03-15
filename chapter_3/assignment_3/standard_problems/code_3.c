/**
 * 	@Author	:- Aryan Mahesh Ranjane 
 * 	@Date	:- 14/3/25 
 */
  
 /* Header File */
 #include <stdio.h>
 
 int remainder_of_two_numbers(int, int); /* Function proto-type */

 int main(void)
 {
 	// Entry point function.

 	/* Data declaration */
 	int inum1;							/* inum1 is an identifier of type int of 4 bytes */ 
 	int inum2;							/* inum2 is an identifier of type int of 4 bytes */

 	printf("Enter two Integer values: "); 
 	scanf("%d %d", &inum1, &inum2); 

 	printf("Remainder of two values: %d ", remainder_of_two_numbers(inum1, inum2));

 	return 0; 
 } 

 /** 
  * 	Function definition 
  * 
  * function_identifier	:- remainder_of_two_numbers
  * function_parameters	:- integer, integer 
  * function_return_type:- integer
  * 
  */

  int remainder_of_two_numbers(int n1, int n2)
  {
  	return n1 % n2; 
  }