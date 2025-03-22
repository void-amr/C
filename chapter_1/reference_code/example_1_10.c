/**
 * 	@Author :- Aryan Mahesh Ranjane 
 * 	@Date  	:- 26/2/25 
 * 	@Program to calculate area of circles, using for loop; 
 * 	 the number of circle is unspecified 
 */ 

 /* header file */ 
 #include <stdio.h>
 #define PI 3.14159 

 float process(float radius); /* Function proto-type */ 

 main() 
 {
 	/* Entry point function */ 

 	/* Variable declaration */ 
 	float radius, area; 
 	int count; 

 	printf("To stop enter 0 for the radius\n"); 
 	printf("Radius = ? ");
 	scanf("%f", &radius);

 	for(count = 1; radius !=0; ++count)	{
 		/* For loop */ 
 		if(radius < 0) 
 			area = 0; 
 		else 
 			area = process(radius); 

 		printf("Area of circle %d: %f",count, area); 
 		printf("\nRadius = ? "); 
 		scanf("%f", &radius); 
 	} 

 	/* This is the block of main function */ 
 	printf("If radius is entered 0 this is the line which is executed and code is exited"); 
 }

/* function_name :- process 
   return_type 	 :- float
   @r(float)     :- r is used as radius to calculate area of circle 
*/ 

 float process(float r) /* Function definition */ 
 {
 	float a; /* Local variabe declaration */ 
 	a = PI * r* r; 
 	return (a); 
 }
