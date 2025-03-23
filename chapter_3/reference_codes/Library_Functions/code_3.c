/**
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date	:- 23/3/25 
 * 	Demonstration of library functions in C 
 */ 
 
 // Header Files 
 #include <stdio.h> 
 #include <ctype.h> 
 
 main()
 { 
	 int lower, upper; 

	 lower = getchar(); 
	 upper = toupper(lower);
	 putchar(upper); 
 } 
