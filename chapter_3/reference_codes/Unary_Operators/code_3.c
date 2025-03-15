/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 15/3/25 
 * 	Demonstration of unary opearator in C
 *
 */ 


 // Header Files 
 #include <stdio.h> 
  
 int main(void)
 {
	 // Entry point function
	 
	 /**
	  * 	sizeof() this function can be used as opearator to find the value of operand 
	  * 	this function is used to find out the size of the specific operand or caste
	  * 	data type. 
	  * 	 
	  * 	As int,char,short,long,double,float act as keyword for data types. 
	  * 	The actual meaning and implementation of data is done at micro processor 
	  * 	level. 
	  *
	  * 	Data-types :- Microprocessor supported word sizes. 
	  *
	  */ 

	 printf("Char: %ld\n", sizeof(char));
	 printf("Integer: %ld\n", sizeof(int));
	 printf("Short Integer: %ld\n", sizeof(short));
	 printf("Integer long: %ld\n", sizeof(long));
	 printf("Long Long: %ld\n", sizeof(long long));
	 printf("Float: %ld\n", sizeof(float));
	 printf("Double: %ld\n", sizeof(double));
	 printf("Long Double: %ld\n", sizeof(long double));  

	 return 0; 

 }
