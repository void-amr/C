/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 10/4/25 
 */ 
 
 // Header Files 
 #include <stdio.h>
 #include <ctype.h>  

 int main(void)
 {
	 char letter[80];		/* letter is an identifier of type char of 1 byte per character 
					   total character -> 80 so letter is of -> 80 bytes. 
					*/ 
	 int count,tag;			

	 /* enter the text */ 

	 for(count = 0; (letter[count] = getchar()) != '\n'; ++count) { 
		 
		 /* tag the character count */ 
		 tag = count; 

	 }
		 /* Display the line in uppercase */ 
		 
		 for(count = 0; count <= tag; ++count) {

			 putchar(toupper(letter[count]));
		 } 	 
 } 
