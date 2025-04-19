/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 *	@Date	:- 14/4/25 
 */ 

 // Header Files 
 #include <stdio.h> 
 #include <string.h> 

 int main(void)
 {
	 // Entry point function. 

	 char *str; 		/* This is pointing to my .text region */ 
	 char item[20]; 	/* allocates 20 bytes on ram */ 

	 scanf("%s", str);	
	 scanf(" %s",item);

	 printf("Pointer string: %s and it's size: %d\n",str, strlen(str));
	 printf("Array string: %s and it's size: %d", item, strlen(item)); 

	 /**
	  * 	This returns segmentation core dumped because I'm trying to find out size of null which is undefined. 
	  */ 
	 return 0; 
 } 
