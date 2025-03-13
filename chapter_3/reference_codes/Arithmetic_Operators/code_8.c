/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 14/2/25 
 * 	Demonstration of unary operator decrement in C
 */ 

 /* Header files */ 
 #include <stdio.h> 
 
 int main(void)
 {
	 // Entry point function. 
	
	 /* Data declaration */ 
	
	 int inum = 5; 		/* inum is an identifier of type int of 4 bytes */ 

	 printf("Post decrement: %d\n",inum--);
	 printf("Pre decrement: %d\n",--inum);

	 return 0; 
 }


