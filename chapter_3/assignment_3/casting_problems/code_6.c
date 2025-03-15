/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com>
 * 	@Date	:- 15/3/25
 * 	Store a negative float in a variable, cast it to int, and observe the result.
 */

 // Header Files
 #include <stdio.h>

 int main(void)
 {
	 // Entry point function.
	  
	 float fval = -125.213532; 		/* fval is an identifier of type float of 4 bytes. */
	 
	 printf("Value before casting:- %f\n", fval);

	 printf("Value after casting :- %d\n", (int) fval); 

	 return 0; 
 } 
