/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com>
 * 	@Date	:- 11/3/25 
 * 	Demonstration of division 
 */ 
 
 /* Header Files */ 
 #include <stdio.h> 
 
 
 void printDivision(); 		/* Function proto-type */

 int main(void)
 {
	 // Entry point function 
	
	 printDivision(); 

	 return 0; 
 }
 
 /**
  * 	Function definition 
  * 
  * function_identifier	:- printDivision 
  * function_parameters	:- none 
  * function_return_type:- void
  *
  */ 
  
  void printDivision() 
  {
	  /* 
	   * 	One rule about division you can't divide the number by 0 
	   *
	   * 	ie :- operand_1 > 0 / operand_2 > 0 
	   *
	   * 	if operand_2 < 0 -> The value is always 0
	   */ 
	   
	   char cnum1 = 110;		// cnum1 is an identifier of type char of 1 bytes. 
	   char cnum2 = 5; 		// cnum2 is an identifier of type char of 1 bytes. 
	 
	   short snum1 = 124;		// snum1 is an identifier of type short of 2 bytes.  
	   short snum2 = 22; 		// snum2 is an identifier of type short of 2 bytes.
	
	   int inum1 = 142; 		// inum1 is an identifier of type integer of 4 bytes. 
	   int inum2 = 12;		// inum2 is an identifier of type integer of 4 bytes.
	   
	   long lnum1 = 22222;		// lnum1 is an identifier of type long of 8 bytes. 
	   long lnum2 = -11111; 	// lnum2 is an identifier of type long of 8 bytes. 
		
	   float fnum1 = 222.222;	// fnum1 is an identifier of type float of 4 bytes. 
	   float fnum2 = 111.111;	// fnum2 is an identifier of type float of 4 bytes. 
	
	   double dnum1 = -33333.333333;// dnum1 is an identifier of type double of 8 bytes. 
	   double dnum2 = 1111.11111; 	// dnum2 is an identifier of type double of 8 bytes.
	
	   printf("\nDivision of characters: %d", (cnum1 / cnum2));
	   printf("\nDivison of short: %hd\n",(snum1 / snum2));
	   printf("Division of integer: %d\n", (inum1 / inum2));
	   printf("Division of long: %ld\n",(lnum1 / lnum2));
	   printf("Division of float: %f\n", (fnum1 / fnum2));
	   printf("Division of double: %lf\n", (dnum1 / dnum2));

  }

