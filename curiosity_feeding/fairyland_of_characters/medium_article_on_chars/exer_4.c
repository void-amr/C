/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 5/4/25 
 */ 
 
 // Header Files 
 #include <stdio.h> 
 #include <wchar.h> 
 #include <locale.h> 

 int main(void) 
 {
	 // Entry point function. 
        	
         setlocale(LC_CTYPE, "");
	 
	 wchar_t star1 = 0x2606; 
	 wchar_t star2 = 0x2605; 

	 wprintf(L"Black star %lc\n", star1);
	 wprintf(L"White Star %lc\n", star2); 

	 return 0; 
 } 
