/**
 * 	@Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date	:- 15/3/25 
 * 	Demonstration of unary operators in C
 */ 
 
 // Header Files
 #include <stdio.h> 
 
 int main(void)
 { 
	 // Entry point Function. 
	  
	 int inum1 = 10;		/* inum1 is an identifier of type int of 4 bytes. */ 
	 int inum2 = 12; 		/* inum2 is an identifier of type int of 4 bytes. */ 
	 int exp_v = -inum1+inum2; 	/* Here the unnary operator - will have higher precedence
				           ie :- -10 + 12 => 2 as the sign of bigger number is + 
					 */ 

	 printf("%d", exp_v);

	 return 0; 
 }
 
