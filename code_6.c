/**
 * 	@Author	:- Aryan Mahesh Ranjane 
 * 	@Date	:- 22/3/25 
 * 	Job Interview Shortlisting (Easy)
 * 	Problem Statement:
 * 	A company shortlists candidates for an interview based on:
 * 	A minimum score of 75 in the aptitude test AND
 * 	Either at least 2 years of experience OR a degree in Computer Science (has_cs_degree == 1).
 */ 

 // Header Files 
 #include <stdio.h> 
 
 void job_check_list(short, short, short); 		/* function proto-type */ 
 
 int main(void) 
 {
	 // Entry point function. 
	  
	 /* Data declaration */ 

	 short aptitude_score; 				/* aptitude_score is an identifier of type short of 2 bytes. */ 
	 short years_of_experience;			/* years_of_experience is an identifier of type short of 2 bytes. */ 
	 short has_cs_degree; 				/* has_cs_degree is an identifier of type short of 2 bytes */ 

	 printf("Enter your aptitude score: "); 
	 scanf("%hd", &aptitude_score);

	 printf("Enter years of experience: ");
	 scanf("%hd", &years_of_experience); 

	 printf("Whether the canditate have cs_degree ?: "); 
	 scanf("%hd", &has_cs_degree);  
	
	 // calling function.
	 job_check_list(aptitude_score, years_of_experience, has_cs_degree); 

	 return 0; 
 } 

 /**
  * 	Function definition 
  *
  * function_identifier	:- job_check_list
  * function_parameters	:- short, short, short 
  * function_return_type:- void
  *
  */ 

  void job_check_list(short apt_score, short y_of_e, short has_cs_degree)
  {
	  if(apt_score >= 75 && y_of_e > 2 || apt_score >= 75 && has_cs_degree == 1) {
		  /* 
		   * True Block
		   */
		  printf("Candidate is eligible for interview");
	  }
	  else {
		  /*
		   * False block 
		   */ 
		  printf("Candidate is not eligible to apply"); 
	  } 
	   
  } 
