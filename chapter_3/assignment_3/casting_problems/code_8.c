/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com>
 * 	@Date	:- 15/3/25
 * 	Convert char to float and check the output of operations like ('A' / 2.0)
 */ 

 // Header File 
 #include <stdio.h>
 
 int main(void) 
 {
	 // Entry point function. 
	 
	 char cval = 'A';		/* cval is an identifier of type char of 1 byte. */

	 printf("Value before casting and performing any operation:- %c\n", cval);
	 printf("Value after casting and performing operation:- %f\n",(float)cval/2.0); 

	 return 0;
 }

