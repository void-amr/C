/**
 * 
 * 	@Author	:- Aryan Mahesh Ranjane 
 * 	@Date	:- 8/7/25 
 * 	Demonstration of vla and error Object of size variable initialized 
 */ 
 
 // Header File 
 #include <stdio.h>
 

 int main(void)
 {
 	// Entry point function.

 	int value;
 	const int SIZE; 
 	int integer_array[SIZE]; 

 	printf("Enter array size");
 	scanf("%d",&SIZE);
 	
 	for(int le = 0; le < SIZE; le++)	{ 
 		printf("Enter value to add to array: "); 
 		scanf("%d", &value); 
 		integer_array[le] = value;  	
 	}

 	for(int le = 0; le < SIZE; le++)	{ 
 		printf("\nValues of array:%d", integer_array[le]); 
 	}
 }
