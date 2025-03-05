/** 
 * 	@Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date 	:- 5/2/25 
 * 	@Reverse the input string withouth using strrev() function 
 */ 

 /* Header file */ 
 #include <stdio.h>
 #include <regex.h>

 int main(void)
 {
 	// Entry point function. 
 	
 	char input_array[100];	/* Declaring a char array :- input_array of size 100 characters*/  
 	int length = 0;			/* Declaring a int lenegth :- used as a counter */

 	printf("Enter a string ");
 	scanf("%s", input_array); 

 	int inputarray_length = sizeof(input_array) / sizeof(char); // Returns :- 100 as input_array :- 100 and sizeof(char) :- 1

 	for(int le = 0; le < inputarray_length; le++)	{
 		/* For loop */
 		if(input_array[le] >= 'a' && input_array[le] <= 'z' || input_array[le] >= 'A' && input_array[le] <= 'Z') {
 			
 			/* Checks if element at specified index of character array is letter or " <Space>"
 			   if it's character increment the length counter by 1 indicating the that these many 
 			   characters are present in this array 

 			   also if space is found we can break out of the loop using break; statement marking the 
 			   end of the input_array with characters and helps us avoid checking redundant space checking 
 			*/

 			length ++;  
 		} else {
 			/* Exits the loop once "<SPACE>" is found in array at specified index of array */
 			break;
 		}
 	}
 	
 	printf("%d\n", length); 

 	for(int le = length-1; le >= 0; le--)	{
 		/* For loop */
 		printf("%c", input_array[le]); 
 	}
 	return 0; 
 }