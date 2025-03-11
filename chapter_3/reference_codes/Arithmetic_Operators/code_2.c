/**
 * 	@Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date	:- 11/3/25 
 * 	Demonstration of substraction 
 */ 

 // Header file 
#include <stdio.h> 
 
void printSubstraction(); 	/* Function proto-type */ 


int main(void)
{
	// Entry point function 
	printSubstraction(); 
	
	return 0; 
}

/**
 *	Function definition 
 *
 * function_identifier	:- printSubstraction() 
 * function_parameters	:- none 
 * function_return_type	:- void 
 *
 */ 
 
 void printSubstraction()
 {
	/* Data declaration */ 
	 char cnum1 = 'A';		// cnum1 is an identifier of type char of 1 bytes.
	 char cnum2 = 97; 		// cnum2 is an identifier of type char of 1 bytes.
	 
	 short snum1 = 53; 		// snum1 is an identifier of type short of 2 bytes.
	 short snum2 = 11; 		// snum2 is an identifier of type short of 2 bytes.
	
	 int inum1 = 133; 		// inum1 is an identifier of type integer of 4 bytes. 
	 int inum2 = 21; 		// inum2 is an identifier of type integer of 4 bytes. 
	
	 long lnum1 = 12515151; 	// lnum1 is an identifier of type long of 8 bytes. 
	 long lnum2 = 32532511; 	// lnum2 is an identifier of type long of 8 bytes. 

	 float fnum1 = 124.525;		// fnum1 is an identifier of type float of 4 bytes. 
	 float fnum2 = 121.521; 	// fnum2 is an identifier of type float of 4 bytes. 

	 double dnum1 = 11352.541241;	// dnum1 is an identifier of type double of 8 bytes.
	 double dnum2 = 124151.512512; 	// dnum2 is an identifier of type double of 8 bytes. 

	 printf("\nSubstraction of char: %d\n",(cnum1 - cnum2));
	 printf("Substraction of short: %d\n",(snum1 - snum2));
	 printf("Substraction of integer: %d\n",(inum1 - inum2)); 
	 printf("Substraction of long: %ld\n",(lnum1 - lnum2));
	 printf("Substraction of float: %f\n",(fnum1 - fnum2));
	 printf("Substraction of double: %lf\n", (dnum1 - dnum2)); 
 }


