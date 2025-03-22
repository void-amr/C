/**
 * 	@Author :- Aryan Mahesh Ranjane 
 * 	@Date   :- 27/2/25 
 * 	@Program to calculate the area of circle, using a while loop; 
 *	 number of circles are unspecified
 */ 

 // Header files 
 #include <stdio.h>
 #define PI 3.14159 

 float process(float radius); /* Function proto-type */ 

 main() 
 {
 	/* Entry point function */ 

 	/* Variable declaration */ 
 	float radius, area; 

 	printf("To stop enter 0 for the radius\n");
 	printf("\nRadius = ? ");  
 	scanf("%f", &radius); 

 	while(radius)	{
 		/* While loop */ 
 		if(radius < 0)
 			area = 0; 
 		else 
 			area = process(radius);

 		printf("Area of circle %f: ", area); 
 		printf("Radius = ?"); 
 		scanf("%f", &radius);  
 	}
 	printf("This executed once loop is over"); 
 }

 /**
  * function_name	:- process 
  * return_type 	:- float 
  * @r (float)		:- r is used as radius to calculate area of circle
  */ 

  float process(float r)	/* Function definition */ 
  {
  	float a;	/* Local variable declaration */ 
  	a = PI * r * r; 
  	return(a); 
  } 