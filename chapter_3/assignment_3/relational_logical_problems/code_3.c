/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 16/3/25 
 *
 * 	Loan Approval (Banking)
 * 	A bank approves a home loan only if:
 * 	
 * 	The person has a credit score of 700+
 * 	AND their monthly salary is more than ₹30,000
 * 	Write a program to check loan eligibility.
 */ 

 // Header Files 
 #include <stdio.h> 
  
 char* loan_eligibility(int, float);		/* function proto-type */ 
 
 int main(void)
 {
	 // Entry point function. 
	 
	 /* Data declaration */ 
	 
	 int credit_score; 			/* credit_score in an identifier of type int of 4 bytes. */ 
	 float salary; 				/* salary is an identifier of type float of 4 bytes. */ 
	 	 
	 printf("__________Welcome_to_X_Bank____________\n"); 
	 printf("\nLet's check whether you fit in to get loan.\n");

	 printf("Enter your credit score: ");
	 scanf("%d", &credit_score); 

	 printf("Enter your salary: ");
	 scanf("%f", &salary); 

	 printf("\n%s", loan_eligibility(credit_score, salary)); 
	 return 0;
 } 
 
 /**
  * 	Function definition 
  *
  * function_identifier	:- loan_eligiblity
  * function_parameters	:- int, float
  * function_return_type:- char pointer 
  */ 
  
  char * loan_eligibility(int credit_score, float salary)
  {
	  return (credit_score > 700 && salary > 30000) ? "Eligible to take loan":"Not Eligible to take loan";
  } 
