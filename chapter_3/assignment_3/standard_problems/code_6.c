/**
 * 	@Author	:- Aryan Mahesh Ranjane 
 * 	@Date	:- 14/3/25 
 */

 /* Header File */ 
 #include <stdio.h>
	
 
 int exponent_v(int, int); 				/* Function proto-type */	

 int main(void)
 {	
 	// Entry point function.

 	/* Data declaration */ 
 	int base;							/* bsse is an identifier of type int of 4 bytes. */
 	int power;							/* power is an identifier of type int of 4 bytes */  

 	printf("Enter base: "); 
 	scanf("%d", &base); 

 	printf("\nEnter power: "); 
 	scanf("%d", &power);

 	printf("\nExponent of number is: %d",exponent_v(base,power)); 

 	return 0; 
 }

 /**
  * 	Function definition 
  * 
  * function_identifier	:- exponent_v
  * function_parameters	:- int,int
  * function_return_type:- int 
  * 
  */ 

  int exponent_v(int base, int power)
  {
  	/**
  	 * 	So, Exponent is basically any number ie base multiplied redundantly for power of times. 
  	 *  so the formula for exponent(E)
  	 * 
  	 *  E = base raise to power (b ^ p)
  	 *  
  	 *  Here, 
  	 * 		b is any number which is going to be multiplied redundantly, 
  	 * 		p is anu number which specifies how many times the multiplication should happen.
  	 */

  	/**
  	 * Here we check if power == 0 if yes we return 1 as number raise to 0 is 1 
  	 */

  	 if(power == 0)
  	 	return 1;   

  	/**
  	 * Here we check if power == 1 if yes then we return base * 1 because 
  	 * any number raise to 1 is number itself.
  	 */ 

  	 if(power == 1)
  	 	return base;

  	 /* We take the constant variable so that we could multiply the base with the same number again and again 
  	 	If we mutliply base with base it get's re-assigned 
  	 */ 

  	 const int VALUE_TO_MULTIPLY = base;

  	 for(int le = 1; le <= power; le++)	{
  	 	/* Here we multiply the same number redundantly for power of times */
  	 	base = base * VALUE_TO_MULTIPLY; 
  	 }  

  	 return base; 
  }