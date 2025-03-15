/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 15/3/25 
 *	@problem_statement:- Convert a double to an int and print both values.
 */ 
 
 // Header File 
 #include <stdio.h> 
 
 int main(void)
 { 
	 // Entry point function. 
 	 
	 double dnum = 142.5252; 		/*  dnum is an identifier of type double of 8 bytes */ 

	 printf("Value of double before casting it: %lf\n", dnum); 
	 printf("Value after casting double-> int: %d\n", (int)dnum);
	 return 0; 
 } 

 
 
