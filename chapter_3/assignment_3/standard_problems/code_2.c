/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 14/3/25 
 */ 

 // Header file 
 #include <stdio.h>
 
 float product(float, float);				/* Function proto-type */ 

 float quotient(float, float);				/* Function proto-type */
 
 int main(void)
 {
 	// Entry point function. 

 	/* Data declaration */ 
 	float fval1, fval2; 

 	printf("Enter two floating point values: ");
 	scanf("%F %F", &fval1, &fval2); 

 	printf("Float Multiplication: %.2f\n",product(fval1, fval2)); 
 	printf("\nFloat Division: %.2f\n", quotient(fval1, fval2)); 

 	return 0;
 }

 /** 
  * 	Function definition 
  * 
  * function_identifier	:- product
  * function_parameters	:- float, float 
  * function_return_type:- float
  *
  */ 

  float product(float n1, float n2)
  {
  	if(n1 < 0 || n2 < 0)
  		return 0.0;

  	return n1 * n2; 
  }

  /**
   * 	Function definition
   * 
   * function_identifier :- quotient 
   * function_parameters :- float, float 
   * function_return_type:- float 
   *
   */ 

   float quotient(float n1, float n2)
   {
   	if(n1 < 0 || n2 < 0)
   		return 0.0; 

   	return n1 / n2; 
   }
