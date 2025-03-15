/**
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com>
 * 	@Date	:- 15/3/25 
 * 	Demonstration of unary operators in C 
 */ 

 // Header Files
 #include <stdio.h> 
 
 int main(void)
 {
	 // Entry point function. 
	 
	 int inum = 1;			/* inum is an identifier of type int of 4 bytes. */  
	 
	 printf("inum value: %d\n",inum);
	 printf("inum value after pre-increment: %d\n",++inum); 
	 printf("inum value after post-increment: %d\n",inum++);
	 printf("Value is updated and now can be seen: %d\n", inum);

	 return 0; 
 } 
