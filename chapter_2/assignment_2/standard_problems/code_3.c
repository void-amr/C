/** 
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com
 * 	@Date	:- 7/3/25 
 * 	Demonstration of using scanf and taking whitespace as input as well using [^] and * 
 */ 

 /* Header File */ 
 #include <stdio.h>

 int main(void)
 {
 	/* Entry point function */

 	/* Data declaration */
 	char string[50]; 

 	/**
 	 * 
 	 * 	[character_1 - character_2]	-> this is called a scanset this is used in scanf function to read the 
 	 *  	   data that is specified in the bracket. 
 	 * 		   Any other data except than one specified in the brackets is not read
 	 *         the stdin closes once it encounters other characters. 
 	 */ 

 	 /**
 	  * 
 	  * [^character] -> This is called negated scanset this stops taking input from stdin only when it recieves 
 	  * 				the data specified in the [] scanset ^-> this makes sure that it reads all the data 
 	  * 				until the one after ^ -> this is taken as input it should stop the stdin. 
 	  */ 

 	 /**
 	  * 	(*) -> This operator at the starting of the specifier ignores all the input from the stdin and 
 	  * 		   doesn't store the value at the arguement pointed memory location 
 	  */ 

 	printf("Enter string: ");
 	scanf("%[^\n]%*c", string); 

 	printf("%s", string); 
 }