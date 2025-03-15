/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 15/3/25 
 * 	Given int x = 10, y = 3, compare the outputs of x / y vs (float)x / y
 */ 
 
 // Header File 
 #include <stdio.h> 
 
 int main(void)
 {
	 // Entry point function.
	 
	 int x = 10;			/* x is an identifier of type int of 4 bytes. */ 
	 int y = 3;			/* y is an identifier of type int of 4 bytes. */ 
	 
	 int division = x/y;		/* division is an identifier of type int of 4 bytes which stores value 
					   of integer division between :- x and y */ 

	 printf("Value after performing integer division:- %d\n", division); 
	 printf("Value after casting first operant and then performing division:- %f\n",(float)division);

	 return 0;
 }

 
