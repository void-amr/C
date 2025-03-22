/** 
 * 	@Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 *  @Date 	:- 4/3/25 
 *  Example code 2_42 checking whether these are valid string constants 
 */ 
 
 /* Header file */
 
 #include <stdio.h>
 
 /* Arguement expects value of type char * got int */ 
 #define VALUE_1 '8:15 P.M'
 #define VALUE_2 "Red, White and Blue" 
 #define VALUE_3 "Cha.3 (Cont\'d)"
 #define VALUE_4 "The professor said, \"Please don't sleep in class\" " 
 #define VALUE_5 "1.3e-12"

 int main(void)
 {
 	/* Entry poing function */

 	// printf("%s", VALUE_1); 
 	printf("%s", VALUE_2); 
 	printf("%s", VALUE_3); 
 	printf("%s", VALUE_4); 
 	printf("%s", VALUE_5);

 	return 0;
  }