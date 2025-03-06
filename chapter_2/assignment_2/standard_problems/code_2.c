/** 
 * 	@Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date 	:- 6/3/25 
 * 	Program to count number of vowels and constants in a string 
 */ 

 /* Header file */ 
 #include <stdio.h>
 #include <string.h>

 void vowel_constants_counter(char str[]);  /* Function proto-type */ 

 int main(void) 
 {
 	/* Entry point function */ 

 	/* Data declaration */ 
 	char string[100]; 

 	printf("Enter a string: "); 
 	scanf("%s",string); 
 	
 	/* Calling function vowel_constants_counter */ 
 	vowel_constants_counter(string); 

 	return 0;
 }

 /** 
  *	Function Definition
  * 
  * function_identifier :-  vowel_constants_counter 
  * function_params 	:-  str (character) array 
  * return_type 		:-  void
  * 
  */ 

  void vowel_constants_counter(char str[]) 
  {
  	/* Data declaration */ 
  	int vowelCounter = 0, constantsCounter = 0; 
  	int lengthOfString = strlen(str); 

  	for(int le = 0; le < lengthOfString; le++)	{
  
  		/* Checks if value at current index of str[] array is equal to any one of them */ 
  		if(str[le] == 'a' || str[le] == 'e' || str[le] ==  'i' || str[le] ==  'o' || str[le] == 'u' || 
  		   str[le] == 'A' || str[le] == 'E' || str[le] ==  'I' || str[le] ==  'O' || str[le] == 'U')
  		{
  			/* Increment the vowel counter by one */
  			vowelCounter++;
  		} else {
  			/* Anything except 'a,e'i,o,u' are considered constants 21
		       Also make's sure that space are not counted as constants 
  			 */
  			if(str[le] != ' ')
  				constantsCounter++; 
  		}
  	}

  	printf("\n Vowels: %d Constants: %d", vowelCounter, constantsCounter);
  }