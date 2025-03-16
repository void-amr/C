/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com
 * 	@Date	:- 16/3/25 
 * 	 
 * 	 A store offers a 10% discount if:
 * 	 The total bill amount is greater than ₹5000
 * 	 OR the customer is a "Premium Member"
 */ 

 // Header Files 
 #include <stdio.h>
 #include <stdbool.h> 
 
 void golden_membership_user(); 				/* function proto-type */ 
 void no_membership_user();					/* function proto-type */ 
 double calculate_discount(bool, double);			/* function proto-type */ 

 /* Global data declaration */ 
 
 double shopping_amount; 					/* shopping_amount is an identifier of type double of 8 bytes. */ 

 int main(void)
 {
	 // Entry point function. 
	  
	 /* Data declaration */ 
	 
	 int user_choice; 					/* user_choice is an identifier of type int of 4 bytes. */ 
	 
	 /* Here we take input to decide which type of user the customer is 
	  * based on that specific functions will be called 
	  */ 
	 printf("______________________________________________\n");
	 
	 printf("\n    	      Hello, Welcome back.                    \n");
	 printf("\n \n"); 
	 printf("1.Gold Membership\n");
	 printf("2.No Membership\n\n"); 
	 printf("Which category customer falls in: ");
	 scanf("%d", &user_choice); 
        
	 /* Here call to specific functions are made 
	  * based on user_choice input
	  *
	  * if user_choice input is 1:- calls function of golden_membership_user 
	  * if user_choice input is 2:- calls function of no_membership_user 
	  * if it is invalid ie:- 3,etc:- print's invalid option 
	  */ 

	 if(user_choice == 1)
		 golden_membership_user();

         else if(user_choice == 2)
		 no_membership_user(); 
	 else
		 printf("\nInvalid option");

	 return 0;
 } 
 
 /**
  * 	Function definition 
  *
  * function_identifier	:- golden_membership_user
  * function_parameters	:- none 
  * function_return_type:- void
  */ 

  void golden_membership_user() 
  {
	  printf("\nEnter shopping amount: ");
	  scanf("%lf", &shopping_amount); 
	
	  printf("Shopping amount before discount: %lf\n",shopping_amount);

	  printf("Shopping amount after discount: %lf\n", calculate_discount(true, shopping_amount)); 

  }  

  /**
   * 	Function definition 
   *
   * function_identifier :- no_membership_user
   * function_parameters :- none 
   * function_return_type:- void 
   */ 
   
   void no_membership_user() 
   {
          printf("\nEnter shopping amount: ");
	  scanf("%lf", &shopping_amount); 
	
	  printf("Shopping amount before discount: %lf\n",shopping_amount);

	  printf("Shopping amount after discount: %lf\n", calculate_discount(false, shopping_amount)); 
   }

 /**
  * 	Function definition 
  *
  * function_identifier	:- calculate_discount
  * function_parameters	:- bool, double 
  * function_return_type:- double 
  */ 
 
  double calculate_discount(bool golden_membership, double s_amount)
  {
	  if(golden_membership == true) {
		  double discount = s_amount - (s_amount * 0.1); 
		  return discount;  
	  } else if(golden_membership == false && s_amount >= 5000) {
		  double discount = s_amount - (s_amount * 0.1); 
		  return discount; 
	  } else {
		  return s_amount; 
	  }
  } 


