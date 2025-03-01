/** 
 *	@Author :- Aryan Mahesh Ranjane(ranjanearyan82@gmail.com)
 * 	@Date   :- 26/2/25 
 * 	@Demonstratio of Area of several circle 
 */ 

// HEADER FILE 
#include <stdio.h>
#define PI 3.14159 

float process(float radius); /* FUNCTION PROTOTYPE */ 

main() 
{
	// ENTRY POINT FUNCTION 
	float radius, area; 	/* VARIABLE DECLARATION */ 
	int count, n; 			/* VARIABLE DECLARATION */ 

	printf("How many circle ? "); 
	scanf("%d",&n); 

	for(count = 1; count <= n; ++count)	{
		printf("\n Circle no: %d = Radius ? ", count);
		scanf("%f", &radius); 

		if(radius < 0)
			area = 0; 
		else 
			area = process(radius); 
		printf("Area of circle = %f \n",area);  
	}
}

float process(float r)	/* FUNCTION DEFINITION */ 
{
	float a; /* LOCAL VARIABLE DECLARATION */ 
	a = PI * r * r; 
	return (a); 
}