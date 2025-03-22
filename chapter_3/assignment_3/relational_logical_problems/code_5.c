/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 16/3/25 
 * 	
 * 	Car Insurance Premium Calculation (Insurance)
 * 	A car owner gets a lower premium if:
 * 	They are above 25 years old
 * 	AND have not been in an accident in the last 3 years
 * 	Write a program to check if a person qualifies for a lower car insurance premium.
 */ 
 
 // Header Files 
 #include <stdio.h> 
 #include <stdbool.h> 
 #include <string.h> 
  
 int main(void) 
 {
	 // Entry point function. 
	  
	 /* Data declaration */ 
	
	 char user_ip; 

	 scanf("%s",user_ip); 
	 printf("%s", user_ip); 
	
	 char user_age[4];				/* user_age is an identifier of type char of 1 byte. */ 
	 char user_accident_info[4]; 			/* user_accident_info is an identifier of type char of 1 byte. */ 
	
	 printf("\nEnter whether the user is above the age of 25 yeard\n"); 
	 scanf("%s", user_age); 

	 printf("Enter whether the user has been in an accident in last 3 years \n"); 
	 scanf("%s", user_accident_info); 
	
         printf("%s %s ", user_age, user_accident_info); 	 	
	 return 0; 
 } 

