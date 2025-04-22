/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 22/4/25 
 */ 
 
 // Header Files
 #include <stdio.h> 
 
 int main(void) 
 {
	 // Entry point function. 
	 
	 char item[5]; 

	 for(int le = 0; le <= 10; le ++) {
		 scanf("%c", &item[le]); 
	 }

	 for(int le = 0; le <= 10; le ++) {
		 printf("%c\n", item[le]);
	 }
	 return 0;
 } 
