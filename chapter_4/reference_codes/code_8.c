/**
 * 	@Author	:- Aryan Mahesh Ranjane	 <ranjanearyan82@gmail.com> 
 * 	@Date	:- 14/4/25 
 */
 
 // Header Files
 #include <stdio.h>
 #include <string.h> 
 
 int main(void)
 {
	 // Entry point function. 
	 
	 char item[20]; 

	 scanf("%[ ABCDEFGHIJKLMNOPQRSTUVWXYZ ]",item);

	 printf("%s: size of string-> %ld",item, strlen(item));

	 return 0;
 } 
