/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 23/4/25 
 */
  
 // Heeader Files 
 #include <stdio.h>
 
 int main(void) 
 {
	 // Entry point function. 
	 
	 int i, j, k; 

	 printf("Six characters "); 
	 scanf("%6d %6d %6d", &i, &j, &k); 
	 printf("%6d %6d %6d\n", i, j, k);
         
 	 printf("\n Mixed values 1:- "); 
	 scanf(" %d, %o, %x", &i, &j, &k); 
	 printf("%8d %8o %8x", i,j,k); 

	 return 0; 
 } 

