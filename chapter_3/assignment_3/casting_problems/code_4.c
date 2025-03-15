/**
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com>
 * 	@Date	:- 15/3/25 
 * 	Write a program that takes user input as a float, casts it to int, and prints both.
 */ 
 
 // Header Files 
 #include <stdio.h> 
 
 int main(void)
 {
	  // Entry point function. 
	  
	  /* Data declaration */ 
	 
	  float fnum; 				/* fnum is an identifier of type float of 4 bytes */  

	  printf("Enter a floating value: ");
	  scanf("%f", &fnum);
	 
	  printf("Value before casting: %f\n",fnum);
	  printf("Value after casting: %d\n", (int)fnum); 
	  
	  return 0; 
 } 
