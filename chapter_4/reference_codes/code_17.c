/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com>
 * 	@Date	:- 17/4/25 
 */ 
 
 // Header Files 
 #include <stdio.h> 
 #include <string.h> 
	
 int main(void) 
 {
	 // Entry point function. 
	  
	 char item[20]; 
	 
	 scanf("%[^\n]",item);
	 printf("%s: %ld",item, strlen(item));	 

	 return 0; 
 } 
