/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 4/4/25 
 */ 
 
 // Header Files 
  
 #include <stdio.h> 
 
 struct Student {

	 char name [20]; 	// 20 bytes 
	 short age; 		// 2  bytes 
	 short rn;		// 2  bytes 
	 char section;		// 1  byte 
	 char grade; 		// 1  byte 
 } student; 

 int main(void) 
 { 
	 // Entry point function. 
	 
	 struct Student student; 

	 printf("%d", sizeof student); 

	 return 0;
 } 
