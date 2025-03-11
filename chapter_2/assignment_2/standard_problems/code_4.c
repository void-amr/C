/**
 * 	@Author :- Aryan Mahesh Ranjane 
 * 	@Datet	:- 7/3/25 
 * 	Remove all the spaces from the string 
 */

 /* Header file */ 
 #include <stdio.h> 
 #include <string.h>
 
 void removeSpaces(char str[]);  /* Function proto-type */ 

 int main(void)
 {
	/* Entry point function */ 

 	/* Data declaration */
 	char string[100]; 

 	printf("Enter String: "); 
 	scanf("%[^\n]", string); 

 	/* Calling functio%n removeSpaces */
 	removeSpaces(string); 

 	return 0; 
 } 

 /**
  * 	Function Definition
  * 
  * function_identifier	:- removeSpaces 
  * function_params		:- str (character) array 
  * function_return_type:- void
  * 
  */ 

  void removeSpaces(char str[])
  {
  	int stringLength = strlen(str); 

  	printf("Lenght of string: %d\n", stringLength); 

  	/* starting of from  0 -> stringLength-1 */
  	for(int le = 0; le < stringLength; le++)	{
  		if(str[le] == ' ')
  			str[le] = '\b';
  			printf("%c", str[le]); 
  	}
  	printf("\nString after removing spaces: %s", str); 
  } 

