/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 23/3/25 
 * 	Demonstration of data type alteration while assigning variables and performing operations
 */ 

 // Header File 
 #include <stdio.h> 
 
 int main(void) 
 {
	 // Entry point function.
	  
	 /* Data declaration */ 
	 int i_val = 101; 			/* i_val is an identifier of type int of 4 bytes. */ 

	 printf("Value before multiple assignment: %d", i_val); 
		
	 // Over writting on the memory of i_val prev -> 101 Over written with -> 202 
	 double d_val = i_val = 202; 		/* d_val is an identifier of type double of 8 bytes. */ 

	 printf("Value after multiple assignment: %lf", d_val); 

	 return 0;
 } 
