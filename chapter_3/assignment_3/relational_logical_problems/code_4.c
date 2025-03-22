/**
 * 	@Author	:- Aryan Mahesh Ranjane 
 * 	@Date	:- 16/3/25 
 * 	To check if user is eligible to vote or not
 * 	if user's age >= 18 then and then only user can vote
 * 	if not user can't vote
 */ 

 // Header Files 
 #include <stdio.h>   

 int main(void)
 {
	 // Entry point function 
	 
	 /* Data declaration */ 
	
	 int age; 			/* age is an identifier of type int of 4 bytes. */ 

	 printf("Enter your age: ");
	 scanf("%d", &age);

	 if( age >= 18)
		 printf("Your'e eligible to vote");
	 else 
		 printf("Your'e not eligible to vote"); 

	 return 0;
 } 
 
