/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com>
 * 	@Date	:- 15/3/25 
 * 	Demonstration of logical connectives in C 
 */ 

 // Header Files 
 #include <stdio.h> 
 
 int main(void)
 {
	 // Entry point function 
         
	 int inum = 122; 		/* inum is an identifier of type int of 4 bytes. */
	 char cval = 'w'; 		/* cval is an identifier of type char of 1 bytes. */ 

	 printf("Expression inum > 120 && cval == 'w': %d\n", (inum > 120 && cval == 'w'));
	 printf("Expression inum > 150 && cval == 'w': %d\n", (inum > 150 && cval == 'w'));

	 printf("Expression inum > 150 || cval =='w': %d\n", (inum > 150 || cval == 'w'));
	 printf("Expression inum >= 122 || cval == 'p': %d\n", (inum >= 122 || cval == 'p'));

	 return 0; 
 } 
