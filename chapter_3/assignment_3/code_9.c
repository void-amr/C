/**
 * 	@Author	:- Aryan Mahesh Ranjane 
 * 	@Date	:- 14/3/25 
 */ 
 
 /* Header Files */ 
 #include <stdio.h> 
 
 double temperature_converter(double); 			/* Function proto-type */  
 
 int main(void) 
 { 
	 // Entry point function. 

	 /* Data declaration */ 
	 double dnum; 					/* dnum is an identifier of type double of 8 bytes. */

	 printf("Enter Celsius temperature: ");
	 scanf("%lf", &dnum); 
	 
	 printf("Celsisu --> Fahrenheit: %lf", temperature_converter(dnum));

	 return 0; 
 } 
 
 /**
  * 	Function definition 
  * 
  * function_identifier	:- temperature_converter
  * function_parameters	:- double
  * function_return_type:- double
  *
  */ 

  double temperature_converter(double celsius)
  {
	  return (celsius * 9 / 5) +32; 
  }


