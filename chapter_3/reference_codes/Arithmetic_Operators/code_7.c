/**
 *		@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 		@Date	:- 14/3/25
 * 		Demonstration of unary operators ++ increment in c
 */ 

 /* Header file */ 
 #include <stdio.h>

 int main(void)
 {
 	// Entry point function. 

 	/* Data declaration */

 	int inum = 5;		/* inum is an identifier of type int of 4 bytes. */ 

 	/**
 	 * 	The difference between the two lies in the way the act in an event.
 	 *  The post increment first prints the numbers and then in the next iteration 
 	 *  it increments it's value.
 	 * 
 	 *  Whereas,the pre increment acts opposite of the post increment. 
 	 *  Here the pre increment add's itself first and then assigns the new value 
 	 *  to that variable. 
 	 */

 	printf("Post increment: %d\n", inum++); 
 	printf("Pre increment: %d\n", ++inum); 
 }