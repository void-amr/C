/**
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date	:- 14/3/25 
 */ 

 // Header File 
 #include <stdio.h>
 
 int main(void)
 {
 	// Entry point function.

 	/* Data declaration */
 	int inum; 					/* inum is an identifier of type int of 4 bytes. */
 	int counter = 2;
 	printf("Enter single integer value : "); 
 	scanf("%d", &inum); 


 	printf("Value after Incrementing by 1: %d\n",++inum);
 	
 	while(counter-- > 0)
 		--inum;

 	printf("Value after decrementing by 2: %d\n", inum); 

 	return 0;
 }