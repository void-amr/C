/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 22/5/25 
 *  Real roots of quadratic equations. 
 */ 


 // Header Files
 #include <stdio.h> 
 #include <math.h> 

 int main() 
 {
	// Entry point function. 
	
	// data declaration
	float a = 0.0f, b = 0.0f, c = 0.0f, x1 = 0.0f, x2 = 0.0f, d = 0.0f; 

	// Reading the values 
	printf("a = "); 
	scanf("%f", &a); 
	printf("b = "); 
	scanf("%f", &b); 
	printf("c = "); 
	scanf("%f", &c); 
	
	/** Carry out the calculation **/ 
	d = sqrt((b * b) - (4 * a * c)); 
    x1 = (-b + d) / (2 * a); 
	x2 = (-b -d) / (2 * a); 
	
	/** Outputting the value */ 
	printf("The roots of quadratic equation x1 = %f and x2 = %f", x1, x2); 
	
	return 0;
 } 
