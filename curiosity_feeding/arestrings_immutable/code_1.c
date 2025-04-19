/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyane82@gmail.com> 
 * 	@Date	:- 13/4/25
 */ 
 
 // Header Files
 #include <stdio.h> 
 
 int main(void) 
 {
	 // Entry point function. 
	  
	 char char_data [] = {"Hello"};		// Implicitly appends '\0' null character at the end 
 	 
	 char ind_data [] = {'H','E','L','L','O'};	// Doesn't append '\0' null character implicitly as this is character not string. 

	 printf("Individual character array: %ld\n", sizeof ind_data);
	
	 printf("Collection of array character as whole: %ld\n", sizeof char_data);
 	 
	 // Are strings in C mutable if now then why ? 
	 
	 char_data[0] = 'G'; 
	 printf("%s\n", char_data);
	 
	 ind_data[1] = 'M'; 
	 
	 for(int le = 0; le < sizeof(ind_data); le++) {

	 printf("%c",ind_data[le]);
	
	 }

	 return 0;
 }
