/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 15/3/25 
 * 	Demonstration of modulus operator in C 
 */ 
 
 // Header Files 
 #include <stdio.h> 


 int main(void)
 {
	 // Entry point function 
	 
	 /**
	  *
	  * 	Modulus :- % for this operator to work
	  * 	the 1st operand must be integer and the second operand must be non-zeor 
	  *
	  */ 

	  /**
	   * 	Mostly the remainder operations in C assigns the sign of the first operand to the remainder value
	   */ 
	 
	  int inum1 = -10; 		/* inum1 is an identifier of type int of 4 bytes with value 10;  */ 
	  int inum2 = -3; 		/* inum2 is an identifier of type int of 4 bytes with value  0;  */ 

	  printf("Remainder of 10 / 0 => %d",(inum1 % inum2));

	  return 0; 
 }
