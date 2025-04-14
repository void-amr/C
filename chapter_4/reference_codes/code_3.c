/**
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date	:- 14/4/25 
 */ 
 
 // Header Files 
 #include <stdio.h> 
 
 int main(void)
 {
	 // Entry point function. 
	 
	 char item[20]; 
	 int partno; 
	 float nb; 

	 scanf("%s%d%f",item,&partno,&nb);

	 printf("%s %d %f", item,partno,nb);

	 return 0;	 
 } 
