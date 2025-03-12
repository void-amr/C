/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 12/3/25 
 * 	Demonstration of array ussage in C 
 */ 

 // Header file 
 #include <stdio.h> 
 #include <stdlib.h> 

 int main(void) 
 
 {
	 // Entry point function. 
	
	 /* Array of constant known size */ 
	 
	 /* Data declaration */ 

	 int n[10]; 
	 char o [sizeof(double)]; 
         enum { MAZ_SIZE= 100}; 
	 int m[MAZ_SIZE]; 

	 printf("%ld\n", sizeof(n));
         printf("%ld", sizeof(o));
	 printf("\n%ld", sizeof(m));

	 exit(0); 
 } 
