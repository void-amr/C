/** 
 * 	@Author	:- Aryan Mahesh Ranjane 
 * 	@Date 	:- 27/2/25 
 * 	@Program to calculate area of circles using while loop; 
 * 	 the results are stored in an array; the number of circles in unspecifief */ 

 // Header files 
 #include <stdio.h> 
 #define PI 3.14159 

 float process(float radius); /* Function proto-type */ 
 
 main() 
 {
 	/* Entry point function */ 

 	/* Array declaration */ 
 	float radius[100], area[100]; 
 	int n, i = 0; 

 	printf("To stop enter radius 0\n\n"); 
 	scanf("%f", &radius[i]);

 	while(radius[i]) {
 	/* While loop */
 		if(radius[i] < 0)
 			area[i] = 0; 
 		else 
 			area[i] = process(radius[i]); 
 		printf("Radius = ?"); 
 		scanf("%f", &radius[++i]); 
 	}

 	n = --i; /* tag the highest value of i */ 

 	/* Display the array elements */
 	for(int le = 0; le <=n; le++) {
 		/* For loop */
 		printf("Radius = %f Area = %f \n", radius[le], area[le]); 
 	}
 }

 /**
  * function_name	:- process
  * return_type 	:- float 
  * @ r				:- r is used as radius to calculate area of circle 
  */ 

  float process(float r)	/* Function definition */ 
  {
  	float a; 	/* Local variable declaration */ 
  	a = PI * r * r; 
  	return(a); 
  }