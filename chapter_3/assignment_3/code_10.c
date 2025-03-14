/**
 * 	@Author	:- Aryan Mahesh Ranjane
 * 	@Date	:- 14/3/25 
 */
 
 /* Header File */ 
 #include <stdio.h> 
 
 int sum_of_digits(int);			/* Function proto-type */  

 int main(void)
 {
	 // Entry point function 
	
	 /* Data declaration */ 
	 
	 int inum; 				/* inum is an identifier of type int of 4 bytes */ 

	 printf("Enter digit: "); 
	 scanf("%d", &inum); 
	 
	 printf("Sum of digits => %d",sum_of_digits(inum)); 
	 return 0; 
 }
 
 /**
  *	Function definition 
  *
  * function_identifier	:- sum_of_digits
  * function_parameters	:- int
  * function_return_type:- int
  */ 
  
  int sum_of_digits(int number)
  {
	  /**
	   *
	   *	So what happens here is let's say use inputs a collection of digits :- 111 
	   *	now that this input is passed on to function :- sum_of_digits 
	   *
	   *	The  function first checks if number is lesser than 0 if yes -> 0 is returned 
	   *	else the other part of code keeps on execution 
	   *
	   *	no inside the while loop 
	   *	we try to take out the remainder of the number -> individual_digit 
	   *	
	   *	@individual_digit -> Stores the last digit of the number ie-> part after the decimal point after division.
	   *	@sum 		  -> add's the digit with existing digit, by default is 0. 
	   *	@number/10 	  -> Used to access the next digit of the number ie -> part before the decimal point after division. 
	   *
	   */
	  int individual_digit;			/* individual_digit is an identifier of type int of 4 bytes. */  
	  int sum = 0; 				/* sum is an identifier of type int of 4 bytes. */ 

	   if(number < 0) 
		   return 0; 

	   while(number > 0) {
		   individual_digit = number % 10; 
		   sum = sum + individual_digit; 
		   number = number / 10; 
	   } 
	
	   return sum; 
  } 

