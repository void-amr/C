/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 15/3/25 
 * 	Print the sizeof() a double, cast it to int, and print its sizeof() again.
 */
 
 // Header Files 
 #include <stdio.h> 
 
 int main(void) 
 { 
	 // Entry point function. 
	  
	 double dnum = 155125.151251; 		/* dnum is an identifier of type double of 8 bytes. */ 

	 printf("size of double before casting:- %ld\n", sizeof dnum); 
	 printf("size of double after casting :- %ld\n", sizeof((int)dnum)); 

	 return 0;
 } 
