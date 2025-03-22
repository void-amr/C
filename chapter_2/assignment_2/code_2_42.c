/**
 *	@Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date 	:- 4/3/25 
 * 	Example code 2_42 checking which of the following are valid character constants. 
 */ 

 /* Header Files */ 
 #include <stdio.h>

 #define VALUE_1 'a'
 #define VALUE_2 '$'
 #define VALUE_3 '\\'
 #define VALUE_4 '\0'
 #define VALUE_5 '\a'
 #define VALUE_6 '\n'
 /* VALUE_7 :- multicharacter constant -Wmutlichar */ 
 #define VALUE_7 '/n'
 /* VALUE_8 :- multicharacter constant -Wmutlichar */ 
 #define VALUE_8 'xyz'
 #define VALUE_9 '\052'

 int main(void)
 {
 	/* Entry point function */	

 	printf("%c\n", VALUE_1); 
 	printf("%c\n", VALUE_2); 
 	printf("%c\n", VALUE_3); 
 	printf("%c\n", VALUE_4);
 	printf("%c\n", VALUE_5); 
 	printf("%c\n", VALUE_6); 
 	printf("%c\n", VALUE_7); 
 	printf("%c\n", VALUE_8); 
 	printf("%c\n", VALUE_9);

 	return 0; 
 }