/**
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date	:- 15/3/25 
 * 	Demonstration of relational operators in C
 */ 
 
 // Header Files 
 #include <stdio.h> 
 
 int main(void)
 {
	 // Entry point function. 

	 int inum1 = 19; 		/* inum1 is an identifier of type int of 4 bytes. */ 
	 int inum2 = 11; 		/* inum2 is an identifier of type int of 4 bytes. */ 
	
	 /**
	  * 	Here, 
	  * 		1:- represents true as true values are stored in integers. 
	  * 		0:- represents false as false values are stored in integers. 
	  */ 

	 printf("Expression inum1 > inum2: %d\n",inum1 > inum2); 
	 printf("Expression inum1 >= inum2: %d\n", inum1 >= inum2);
	 printf("Expression inum1 < inum2: %d\n", inum1 < inum2);
	 printf("Expression inum1 <= inum2: %d\n", inum1 <= inum2); 

	 // Equality operation 
	 printf("Expression inum1 == inum2: %d\n", inum1 == inum2);
	 printf("Expression inum1 != inum2: %d\n", inum1 != inum2); 

	 return 0; 
 } 
