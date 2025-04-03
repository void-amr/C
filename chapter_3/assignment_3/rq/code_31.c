/**
 * 	@Author	:- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 * 	@Date	:- 3/4/25 
 */  

 // Header Files
 #include <stdio.h> 
 
 int main(void) 
 {
	 // Entry point function. 
	  
	 char c = 65;  

	 /**
	  *
	  * 	If my systems gcc compiler has set to interpret character values as signed values 
	  * 	the signed values range from -127 to 127 
	  * 	so assigning 130 would lead to buffer over flow 
	  * 	
	  * 	If my systems gcc compiler has set to interpret thc character values as unsigned values 
	  * 	the signed values range from 0 to 255 
	  * 	so assigning 130 would return 130 itself. 
	  */ 
	  
	  printf("%c : %d\n",c,c); 

	  return 0; 
 } 
