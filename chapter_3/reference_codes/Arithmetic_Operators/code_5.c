/**
 * 	@Author	:- Aryan Mahesh Ranjane 
 * 	@Date	:- 12/3/25 
 * 	Demonstration of modolous operator 
 */ 

 /* Header Files */ 

 #include <stdio.h> 
 
 void printModulous();  

 int main(void) 
 {
	 // Entry point function 
	 printModulous();

	 return 0; 

 } 
	
 /**
  * 	Function definition 
  *
  * function_identifier	:- printModulous
  * function_parameters	:- none
  * function_return_type:- void
  */ 
  
  void printModulous()
  {
	  char cnum1 = 65;		// cnum1 is an identifier of type char of 1 bytes.  
	  char cnum2 = 5; 		// cnum2 is an identifier of type char of 1 bytes.
	 
	  short snum1 = 122;		// snum1 is an identifier of type short of 2 bytes. 
	  short snum2 = 2; 		// snum2 is an identifier of type short of 2 bytes. 
	 
	  int inum1 = 2224;		// inum1 is an identifier of type int of 4 bytes. 
	  int inum2 = 2;		// inum2 is an identifier of type int of 4 bytes. 
	
	  long lnum1 = 42224;		// lnum1 is an identifier of type long of 8 bytes. 
	  long lnum2 = 22;		// lnum2 is an identifier of type long of 8 bytes.
/*
	  float fnum1 = 344.22;		// fnum1 is an identifier of type float of 4 bytes. 
	  float fnum2 = 22.22; 		// fnum2 is an identifier of type float of 4 bytes. 
	
          double dnum1 = 222.222; 	// dnum1 is an identifier of type double of 8 bytes. 
	  double dnum2 = 111.222; 	// dnum2 is an identifier of type double of 8 bytes. 
*/ 	 
	  printf("\n Remainder of character: %d",(cnum1 % cnum2));
	  printf("\n Remainder of short: %d",(snum1 % snum2));
	  printf("\n Remainder of integer: %d",(inum1 % inum2));
	  printf("\n Remainder of long: %ld",(lnum1 % lnum2));
/*
	  printf("\n Remainder of float: %f",(fnum1 % fnum2));
	  printf("\n Remainder of doubler: %lf",(dnum1 % dnum2));
*/ 

 }

 
 
