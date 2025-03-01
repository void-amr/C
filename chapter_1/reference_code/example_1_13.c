/**
 * 	@Author	:- Aryan Mahesh Ranjane 
 * 	@Date 	:- 28/2/25 
 * 	@ Program to calculate area of circle, using while loop; 
 *    the results are stored in an array of structures; 
 * 	  the number of circles is unspecified,
 * 	  a string is entered to identify each data set */ 

 // Header file 
 #include <stdio.h>
 #define PI 3.14159 
 
 float process(float radius);	/* Function proto-type */

 main() 
 {
 	/* Entry point function */ 

 	int n, i = 0; /* Variable declaration */ 

 	/* Struct variable array */ 

 	struct 	{
 				char text[20]; 
 				float radius; 
 				float area; 
 	
 	} circle[10]; 

 	printf("To stop enter `End` for the identifier"); 
 	printf("\nIdentifier = ?"); 
 	scanf("%s", circle[i].text); 

 	while(circle[i].text[0] != 'E' || circle[i].text[1] != 'N' 
 							       || circle[i].text[2] != 'D')	{
 		
 		/* Taking radius as input for corresponding identifier */ 
 		printf("Radius = ? "); 
 		scanf("%f", &circle[i].radius); 

 		/* Error checking */ 
 		if(circle[i].radius < 0)
 			circle[i].area = 0.0; 
 		else 
 			circle[i].area = process(circle[i].radius); 
 		
 		i++; /* To change the structure array to point to next position */ 

 		printf("\nIdentifier ? \n");  
 		scanf("%s", circle[i].text); 
 	}

 	n = --i; /* Tag the highest value i */ 

 	/* Display the array of elements */
 	for(int le = 0; le <= n; le++)	{
 		/* For loop */ 
 		printf("\n%s Radius = %f Area = %f", circle[le].text,
 											circle[le].radius,
 											circle[le].area); 
 	}
 }

 /*	function_name :- process 
 	return_type   :- float 
 	Params 		  :- r (float)
 */ 

 float process(float r) /* Function defenition */ 
 {
 	float a;	/* Local variable */ 
 	a = PI * r * r;	
 	return(a); 
 }
