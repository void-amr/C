/**
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date	:- 14/3/25 
 */ 

 /* Header Files */ 
 #include <stdio.h> 

 void even_odd_checker(int); 		/* Function proto-type */
 
 int main(void) 
 {
	 // Entry point function 
	 
	 /* Data declaration */ 
	 int inum; 				/* inum is an identifier of type int of 4 bytes */ 

	 printf("Enter integer value: "); 
	 scanf("%d", &inum);

	 even_odd_checker(inum);  

	 return 0; 
 
 } 
 
 /** 
  * 	Function definition 
  *
  * function_identifier	:- even_odd_checker
  * function_parameters	:- int
  * function_return_type:- void
  *
  */

  void even_odd_checker(int number)
  {
	  if(number % 2 == 0)
		  printf("This number %d is : Even",number); 
	  else
		  printf("This number %d is : Odd ", number); 
  }
