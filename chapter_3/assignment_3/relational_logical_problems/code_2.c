/**
 * 	@Author	:- Aryan Mahesh Ranjane 
 * 	@Date	:- 16/3/25 
 *
 * 	Employee Bonus Calculation (HR)
 * 	A company gives a ₹5000 bonus if an employee has:
 * 	Worked for 5 or more years
 * 	AND has a performance rating of 8 or above
 * 	Write a program that takes years of experience and performance rating as input and checks if the employee is eligible for the bonus.
 */ 

 // Header File 
 #include <stdio.h>

 char* eligibility_checker();  			 /* Function proto-type */  
 
 int main(void) 
 {
	 // Entry point function. 
        
	 printf("%s", eligibility_checker()); 
	 return 0; 
 } 
 
 /**
  *
  * 	Funcction definition 
  *
  * funcction_identifier :- eligibility_checker 
  * function_parameters  :- none
  * function_return_type :- char pointer
  */ 
  
  char* eligibility_checker() 
  {
	
	 int rating; 				/* rating is an identifier of type int of 4 bytes. */
	 int y_o_e; 				/* y_o_e is an identifier of type int of 4 bytes. */ 


	 printf("Enter year of experience: ");
	 scanf("%d", &y_o_e); 

	 printf("Enter performance rating of employee: ");
	 scanf("%d",&rating); 

	 if(y_o_e >= 5 && rating >= 8) {
		 return" Eligible for 5000rs Bonus!"; 
	 } else { 
		 return" Not Eligible for 5000rs Bonus!";
	 } 
  }
 

