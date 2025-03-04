/** 
 * 	@Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date	:-- 4/3/25 
 * 	@Demonstration of escape sequence in C. 
 */ 
 
 /* Header file */
 #include <stdio.h>
 
 /* Mostly used escape sequence */ 
 #define NEWLINE "\n"
 #define CR 	 "\r"
 #define BACKSP	 "\b"
 #define H_TAB 	 "\t"
 #define V_TAB   "\v"


 int main(void)
 {
 	/* Entry point function */ 

 	/* Variable declaration */ 
 	char sentence[100] = " Aryan is my name, Naam toh suna hi hoga apne.What is C \?"; 
 	printf("%s %s",BACKSP, sentence); 

 	printf("\n %s After adding escape sequence %s", H_TAB,V_TAB); 
 	printf("%s %s %s",CR, NEWLINE, sentence);
 	return 0;
 }