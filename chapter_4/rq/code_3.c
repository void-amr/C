/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 21/4/25
 */ 
 
 // Header Files 
 #include <stdio.h> 
 
 int main(void) 
 {
	 // Entry point function. 
	 
	 char item[20]; 
	 
         for(int le = 0; le < 20; le++) {
		scanf("%c", &item[le]);	 
	 }
	 
	 for(int le = 0; le < 20; le++) {
		if(item[le] == '\n' || ' ') {
			printf("wsc"); 
		}/* else if (item[le] == ' ') {
			printf(" bs "); 
		} */else {
		printf(" %c ", item[le]); 
		} 
	 } 
	 printf("\n"); 

	 return 0; 
 } 
