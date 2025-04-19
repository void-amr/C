/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 19/4/25 
 */ 
 
 // Header Files  
 #include <stdio.h> 
 
 int main(void) 
 {
	 // Entry point function. 
	 
	 int i = 123; 
	 float x = 12.0, y = -3.3; 

	 printf("1:%6d %7.0f %10.1e\n\n\n",i,x,y);
	 printf("2:%-6d %-7.0f %-10.1e\n\n\n",i,x,y);
 	 printf("3:%+6d %+7.0f %+10.1e\n\n",i,x,y);
	 printf("4:%-+6d %-+7.0f %-+10.1e\n\n",i,x,y);
	 printf("5:%7.0f %#7.0f %7g %#7g",x,x,y,y);
	 return 0; 
 } 
