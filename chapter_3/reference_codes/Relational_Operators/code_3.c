/**
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date	:- 23/3/25
 * 	Demonstration of relational operators in C
 */ 

 // Header Files 
 #include <stdio.h> 


 int main(void)
 {
	 // Entry point function. 
	  
	 if(1 || 1)
		 printf("Both are true"); 
	 else if (0 || 1) 
		 printf("1 is true so true");
	 else 
		 printf("1 is not taken as true"); 

	 return 0; 
 }
 
