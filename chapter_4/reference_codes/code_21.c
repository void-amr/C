/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 18/4/25 
 */ 

 // Header Files
 #include <stdio.h> 
 
 int main(void) 
 {
	 // Entry point function. 
 	 
	 char line[12] = {"Hexadecimal"};

	 printf("\n%10s: S-type Overrides the minimum field width specification\n",line);
	 printf("%-15s:Minimum field width specification\n",line);
	 printf("%15.5s: Minimum field width with precision specification\n",line);
	 printf("%-.5s: Precision width specification\n",line);
	 
	 return 0; 
 }
