/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 11/3/25 
 * 	@Demonstration of Arithmetic operation addition in C
 */ 

 /* Header Function */ 
 #include <stdio.h> 
 
 void printAddition(); 			/* Function proto-type */ 

 int main(void) 
 {
	// Entry point function 
	printAddition(); 
 }

 /**
  * 	Function definition 
  *
  * function_identifier :- printAddition 
  * function_parameter	:- none 
  * function_return_type:- void
  *
  */ 
 
 void printAddition()
 {
	/* Data declaration */ 

	char   cnum1 = 80; 			// cnum1 is an identifier of type 1 byte.
	char   cnum2 = 'A'; 		// cnum2 is an identifier of type 1 byte.
	char   cnum3 = 0; 			// cnum3 is an identifier of type 1 byte.

	short  snum1 = 23;			// snum1 is an identifier of type 2 bytes. 
	short  snum2 = -11;			// snum2 is an identifier of type 2 bytes. 
	short  snum3 = 0; 			// snum3 is an identifier of type 2 bytes. 
	
	int    inum1 = 12;			// inum1 is an identifier of type 4 bytes. 
	int    inum2 = -24;			// inum2 is an identifier of type 4 bytes. 
	int    inum3 = 0; 			// inum3 is an identifier of type 4 bytes.
	
	long   lnum1 = 14513; 		// lnum1 is an identifier of type 8 bytes. 
	long   lnum2 = -12515; 		// lnum2 is an identifer  of type 8 bytes.
	long   lnum3 = 0; 			// lnum3 is an identifier of type 8 bytes.
	
	float  fnum1 = 14.353;		// fnum1 is an identifier of type 4 bytes.  
	float  fnum2 = 15.1251; 	// fnum2 is an identifier of type 4 bytes.
	float  fnum3 = 0.0; 		// fnum3 is an identifier of type 4 bytes. 
	
	double dnum1 = 2525.32552;	// dnum1 is an identifier of type 8 bytes. 
	double dnum2 = 215.51512; 	// dnum2 is an identifier of type 8 bytes.
	double dnum3 = 0.000; 		// dnum3 is an identifier of type 8 bytes. 
	
	cnum3 = cnum1 + cnum2; 
	printf("Addition of character: %d\n",cnum3);

	snum3 = snum1 + snum2; 
	printf("Addition of short: %d\n", snum3); 

	inum3 = inum1 + inum2; 
	printf("Addition of integer: %d\n", inum3); 

	lnum3 = lnum1 + lnum2; 
	printf("Addition of long: %ld\n", lnum3); 

	fnum3 = fnum1 + fnum2; 
	printf("Addition of float: %f\n", fnum3); 

	dnum3 = dnum1 + dnum2; 
	printf("Addition of double %lf\n", dnum3);

	printf("\nEnd of Program"); 
 }	
