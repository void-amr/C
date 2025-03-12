/**
 * 	@Author	:- Aryan Mahesh Ranjane
 * 	@Date	:- 12/3/25 
 * 	Demonstration of array in c
 */ 

 // Header file 
 #include <stdio.h> 
 

 void fadd(double a[static 10], const double b[static 10]) {

	 for(int le = 0; le < 10; le++)	{
		 if(a[le] < 0.0) return; 
		 a[le] = a[le] + b[le];
	 	 printf("%lf\n",a[le]);
	 }
 }
 
 int main(void)
 {
	 // Entry point function. 

	 double a[10] = {12}, b[10] = {10}; 
	 fadd(a,b); 

	 return 0; 

 } 

