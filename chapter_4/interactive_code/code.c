/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 19/4/25 
 */ 
 
 // Header Files
 #include <stdio.h> 

 int main(void)
 {
	 // Entry point function. 
	 
	 char name[20]; 
	 float score1, score2, score3, score4, avg; 

	 printf("Please enter your name: ");
	 scanf("%[^\n]",name);
	 
	 printf("Enter your first score: ");
	 scanf("%f", &score1); 

	 printf("Enter your second score: ");
	 scanf("%f", &score2);

	 printf("Enter your third score: "); 
	 scanf("%f", &score3);

	 printf("Enter your fourth score: "); 
	 scanf("%f", &score4); 
	 
	 avg = (score1 + score2 + score3 + score4) / 4; 
	 printf("%f", avg);

	 return 0;
 } 
