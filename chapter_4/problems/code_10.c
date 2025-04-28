/**
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date	:- 28/4/25
 */ 
 
 // Header Files
 #include <stdio.h> 
 
 int main(void) 
 {
	 // Entry point function.
	 
	 char a, b, c; 		/** 1 byte each is allocated for each identifier **/ 

	 printf("Reading value for no interspersed space strings ");
	 scanf(" %1s%1s%1s", &a, &b, &c);
	 printf("Printing the values for no interspersed space strings: %s %s %s\n", &a, &b, &c); 

	 return 0;
 } 
