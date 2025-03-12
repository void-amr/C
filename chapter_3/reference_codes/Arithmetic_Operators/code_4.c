/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 12/3/25 
 * 	Demonstration of multiplication 
 */ 
 
 
 /* Header files */ 
 #include <stdio.h> 
 
 
 void printMultiplication(); 		/* Function Proto-type */ 
 
 int main(void)
 {
	// Entry point function 
	printMultiplication(); 
	
	return 0; 
 }
 
 /**
  * 	Function definition 
  *
  * function_identifier	:- printMultiplication 
  * function_parameters	:- none 
  * function_return_type:- void 
  */ 
  
  void printMultiplication()
  {
	  char cnum1 = 35;			// cnum1 is an identifier of type char of 1 bytes.  
	  char cnum2 = 'A'; 			// cnum2 is an identifier of type char of 1 bytes. 

	  short snum1 = 131;			// snum1 is an identifier of type short of 2 bytes.  
	  short snum2 = 2; 			// snum2 is an identifier of type short of 2 bytes.
	  
	  int inum1 = 111; 			// inum1 is an identifier of type integer of 4 bytes. 
	  int inum2 = 22; 			// inum2 is an identifier of type integer of 4 bytes. 
	
	  long lnum1 = 13252523;		// lnum1 is an identifier of type long of 8 bytes.  
	  long lnum2 = 2222531; 		// lnum2 is an identifier of type long of 8 bytes. 
	 
	  float fnum1 = 1124.1241f; 		// fnum1 is an identifier of type float of 4 bytes. 
	  float fnum2 = 4225.1255f;		// fnum2 is an identifier of type float of 4 bytes.  
	  
	  double dnum1 = 1241.51251515; 	// dnum1 is an identifier of type double of 8 bytes.
	  double dnum2 = 42122.222222532;	// dnum2 is an identifier of type double of 8 bytes. 

	  printf("\n Multiplication of characters: %d", (cnum1 * cnum2));
	  printf("\n Multiplication of short: %hd",(snum1 * snum2));
	  printf("\n Multiplication of integer: %d",(inum1 * inum2));
	  printf("\n Multiplication of long: %ld",(lnum1 * lnum2));
	  printf("\n Multiplication of float: %f",(fnum1 * fnum2));
	  printf("\n Multiplication of double: %lf",(dnum1 * dnum2));

  }


