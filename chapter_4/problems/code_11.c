/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 28/4/25 
 */ 

 // Header Files
 #include <stdio.h> 
 #include <stdlib.h> 
 
 int main(void) 
 {
	 // Entry point function. 
	
   	 char str[9];
	 
	 printf("Enter a number value: ");

	 if(scanf("%s", str) > 0) {
		printf("Ascii to interger value using atoi() -> %d", atoi(str));
	 } else {
		printf("No data is read scanf() ambiguity");
	 } 		

	 return 0;
 }
