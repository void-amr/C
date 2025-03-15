/**
 * 	@Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com 
 * 	@Date	:- 15/3/25 
 * 	Demonstration of casting in c 
 */ 
 
 // Header File 
 #include <stdio.h> 
 
 int main(void)
 {
	 // Entry point function 
	 
	 int inum = 35; 
	 float fnum = 2.5; 

	 printf("Result of the expression :- (inum + fnum) % 4 -> %d ",(/* Explicitly converting to Int*/ (int)(inum 		     + fnum) % 4));
	
	 return 0; 
 } 
