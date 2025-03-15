/**
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date	:- 15/3/25 
 * 	Demonstration of modulus operator in C 
 */ 
  
 // Header Files 
 #include <stdio.h> 
 
 int main(void)
 {
	 // Entry point function. 

	 int inum1 = 100;		/* inum1 is an identifier of type int of 4 bytes. */ 
	 int inum2 = 3;			/* inum2 is an identifier of type int of 4 bytes. */ 
        
	 int remainder  = ((inum1/inum2) * inum2) + (inum1 % inum2);

	 printf("Remainder of the inum1 and inum2:- %d",remainder); 
	 
	 return 0;
	 
 }
