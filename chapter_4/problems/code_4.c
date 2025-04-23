/**
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date	:- 23/4/25
 */ 
 
 // Header Files 
 #include <stdio.h> 
 
 int main(void) 
 {
	 // Entry point function. 
	 
	 int i, j, k; 

	 printf("Reading decimal values");
	 scanf("%d%d%d", &i, &j, &k);
	 printf("1: %d %d %d\n",i, j, k);
	 
	 printf("Mixed values 2"); 
	 scanf("%d%o%x",&i,&j,&k); 
	 printf("%d %o %x", i, j, k); 

	 return 0;
 } 

