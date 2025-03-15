/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 15/3/25 
 * 	Cast a long int to a short int and print the values before and after casting.
 */ 
 
 // Header Files 
 
 #include <stdio.h> 
 
 int main(void) 
 {
	 // Entry point function. 
	 
	 long lval = 61363166316; 		/* lval is an identifier of type long of 8 bytes. */ 

	 printf("Value before casting:- %ld\n",lval);
	 printf("Value after casting:- %hd\n", (short)lval);

	 return 0; 
 } 
