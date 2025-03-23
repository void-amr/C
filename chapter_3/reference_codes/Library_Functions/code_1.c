/**
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 	
 * 	@Date	:- 23/3/25 
 * 	Demonstration of library functions in C 
 */ 
 
 // Header File 
 #include <stdio.h>
 #include <math.h> 

 int main(void) 
 { 
	 // Entry point function. 
	 
	 /* Data declaration */ 

	 double a,b,c,root,x1,x2; 
	 
	 printf("Enter value of a,b,c: "); 
	 scanf("%lf %lf %lf", &a, &b, &c); 

	 root = sqrt(b*b - 4 * a * c);
	 x1 = (-b + root) / (2 * a); 
	 x2 = (-b - root) / (2 * a); 

	 printf("\nQuadratic equations -> roots:- \n x1 = %lf and x2 = %lf", x1, x2);

	 return 0; 
 } 
