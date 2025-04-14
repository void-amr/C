/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 14/4/25 
 */
 
 // Header Files
 #include <stdio.h> 
 #include <string.h> 

 int main(void)
 {
	 // Entry point function. 
	 
	 char ch = 'c';  

	 printf("%s -> address of var:- %p",&ch, &ch);
 	 
	 ch = 'd'; 
	 printf("\n%s", &ch);
	 
	 scanf("%s",ch);
	 return 0;
 } 
