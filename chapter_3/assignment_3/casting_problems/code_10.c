/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com>
 * 	@Date	:- 15/3/25
 * 	Write a function that takes an int, casts it to char, and returns it. 
 * 	Call the function with 97 and observe the result.
 */

 // Header Files 
 #include <stdio.h> 

  
 char ascii_to_char(int); 		/* Function proto-type */ 

 int main(void)
 {
	 // Entry point function. 
	
	 /* Data declaration */

	int inum;			/* inum is an identifier of type int of 4 bytes. */

	printf("Enter valid ASCII value:- "); 
	scanf("%d", &inum); 
 
	printf("Char value of given ASCII value is:- %c\n", ascii_to_char(inum)); 

	return 0; 

 }
 
 /**
  * 	Function definition 
  *
  * function_identifier	:- ascii_to_char
  * function_parameters	:- int
  * function_return_type:- char
  *
  */
  
 char ascii_to_char(int v_ascii)
 {
	 return v_ascii; 
 }


