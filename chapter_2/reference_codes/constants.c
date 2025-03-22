/** 
 * 	@Author :- Aryan Mahesh Ranjane (ranjanearyan82@gmail.com)
 *  @Date	:- 3/3/25 
 * 	Program to check if Constant allows 0 if two or more constant digits are taken 
 */

 // Header files 
 #include <stdio.h>
 #include <math.h>
 /* 
 	#define CONSTANT_VALUE -09
	gives error : invalid digit : 9 in octal constant 
	This is error is given because sure decimals doesn't take 0 as preceeding value 
	octal numbers do take 0 as preceeding value but it's units place is upto 7 and 09 exceeds the octal value.  
 */ 
 /* 
	The constant also allows us to provide signs to prior ie negative/positive
	preceeding signs are considered part of constants.  
 */  
 #define CONSTANT_VALUE -9
 /* 
	Hexa decimal constants must preceedingly start with 
	0x or 0X 
	it can contain digits from 0-9
	it can also contain characters from (a-f {A-F}) representing 10-15 decimal digits  
 */
 #define HEXA_CONSTANT_VALUE 0x1F
 
 /* 
	Unsigned constants must end with U at the end to make sure the constant are unsigned 
	the difference is this that, unsigned integer constant give more magnitude than ordinary integer constant. 
	it also allows long to be added with it :- for this to happen one must add l at the end as well 
	ie 25252UL will consider the constant value as unsigned long integer. 
 */ 
 #define UNSIGNED_CONSTANT 1444U

 /* 	
	Floating point way of doing things. 
 */ 
 #define FLOATING_CONSTANT 3.5E-1

 #define CHARACTER_COSTANT 'C'
 
 #define ASCII_CODE 65

 /* 	
 	This is not valid on integer constant we can't use suffix "ha"
 */ 
 #define VALIDORNOT 0x87e3ha 

 main() 
 {
 	/* Entry point function */
 	printf("%d\n", CONSTANT_VALUE); 
 	printf("%d\n", HEXA_CONSTANT_VALUE); 
 	printf("%u", UNSIGNED_CONSTANT); 

 	float float_exp = 3.5E-3; 
 	printf("%f\n", float_exp);

 	printf("%f\n", FLOATING_CONSTANT); 

 	printf("%c\n", CHARACTER_COSTANT);

 	printf("%c", ASCII_CODE);

 	printf("%d", VALIDORNOT);  
 }