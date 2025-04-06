/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 6/4/25 
 */ 
 

 // Header Files 
 #include <stdio.h> 
 #include <locale.h> 
 #include <wchar.h> 
 #include <stdlib.h> 
 #include <uchar.h> 

 int main(void) 
 { 
	 // Entry point function. 
	 
	 setlocale(LC_ALL,"en_US.UTF-8");

	 char32_t x = 0x1F319;

	 printf("%ld\n", sizeof x);
	  
	 char32_t wc = L'\U0001f319';
	 
	 printf("%ld", sizeof wc);

	 wprintf(L"%lc",wc);

	 return EXIT_SUCCESS;
 } 
