/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 14/3/25 
 */ 

 /* Header Files */ 
 #include <stdio.h>

 void swap_two_numbers(int, int); 				/* Function proto-type */

 int main(void)
 {
 	// Entry point function.

 	/* Data declarartion */
 	int inum1; 									/* inum1 is an identifier of type int of 4 bytes */
 	int inum2;									/* inum2 is an identifier of type int of 4 bytes */ 

 	printf("Enter two integer values: "); 
 	scanf("%d %d", &inum1, &inum2); 

 	printf("\nValue before swapping: %d %d", inum1, inum2);
 	swap_two_numbers(inum1,inum2);  

 	return 0; 
 }

 /** 
  * 	Function definition 
  * 
  * function_identifier	:- swap_two_numbers
  * function_parameters	:- integer, integer
  * function_return_type:- void
  * 
  */ 

  void swap_two_numbers(int n1, int n2)
  {
  	/**
  	 * 	To put this in picture let's imagine that their are two numbers  :- 6 and 5 
  	 *  now if I add n1 + n2 --> store it in n1 
  	 *  
  	 *  n1 => 11 
  	 *  
  	 *  Now if I subtract n1 from n2 --> 11 - 5 --> I will get 6 
  	 *  let's store this 6 in n2 
  	 * 
  	 *  Now if I subtract the n1 from n2 --> 11 - 6 --> I will get 5 
  	 *  let's store that 5 in n1 
  	 * 
  	 *  So our final values after performing arithmetics would be: 
  	 * 
  	 * 	n1 = 5 and n2 = 6 
  	 * 
  	 */

  	 if(n1 < 0 && n2 < 0)
  	 	return;

  	n1 = n1 + n2; 
  	n2 = n1 - n2; 
  	n1 = n1 - n2; 

  	printf("\nValue after swapping: %d %d", n1, n2);

  }