/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 4/4/25
 */ 

 
 // Header Files 
 #include <stdio.h> 

 struct decl {
	 // Here just memory is alloacted we have not initialzed the memory yet. 
	 unsigned int value_1 : 12;
	 unsigned char cvalue_1 : 1; 
	 unsigned char cvalue_2 : 1; 
 } data; 

 int main(void)
 {
	 // Entry point function. 
	 
	 struct decl data; 
	 
	 // initializing memory for the data variables 
	 data.value_1 = 12; 
	 data.cvalue_1 = 1; 
	 data.cvalue_2 = 0; 

	 // printing the total size of the struct 
	 printf("\n%ld", sizeof data);

	 printf("\n%d\n",data.value_1);
	 printf("%d\n", data.cvalue_1);
	 printf("%d\n",data.cvalue_2);

	 return 0; 

 } 
