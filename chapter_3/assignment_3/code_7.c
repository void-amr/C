/**
 * 	@Author	:- Aryan Mahesh Ranjane 
 * 	@Date	:- 14/3/25 
 */
 
 /* Header File */ 
 #include <stdio.h> 
	
 int average_of_three(int, int, int);   /* Function proto-type */  
 
 int main(void)
 {
	 // Entry point function. 

	 /* Data declaration */
	 
	 int inum1;			/* inum1 is an identifier of type int of 4 bytes. */  
	 int inum2;			/* inum2 is an identifier of type int of 4 bytes. */ 
	 int inum3; 			/* inum3 is an identifier of type int of 4 bytes. */ 

	 printf("Enter three integer values: ");
	 scanf("%d %d %d", &inum1, &inum2, &inum3); 

	 printf("\nAverage of three numbers is: %d\n",average_of_three(inum1,inum2,inum3));
	
	 return 0; 
 }

 /**
  * 	Function definition 
  *
  * function_identifier	:- average_of_three
  * function_parameters	:- int, int, int
  * function_return_type:- integer
  *
  */
  
  int average_of_three(int n1, int n2, int n3)
  {
	  return (n1 + n2 + n3) / 3; 
	
  }

