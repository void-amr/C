/**
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date	:- 15/3/25 
 * 	Demonstration of implicit and explicit type casting in C 
 */ 

 // Header File 
 #include <stdio.h> 
  
 int main(void)
 {
	// Entry point function. 
	
	int inum = 7;			/* inum is an identifier of type int of 4 bytes. */ 
	float fnum = 5.5; 		/* fnum is an identifier of type float of 4 bytes */ 
	typeof(inum + fnum) y; 
	printf("Expression_1: i + f will result into %f",y);

	return 0; 

 }
