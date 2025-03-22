/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 22/3/25 
 * 	Flight Ticket Discount
 * 	An airline provides discounts based on:
 *
 * 	Whether the passenger is a senior citizen (60+ years).
 * 	Whether the passenger is a frequent flyer.
 * 	Whether the ticket is booked during an off-peak season.
 */ 

 // Header Files 
 #include <stdio.h> 

 void airline_discount(short, short, short); 		/* function proto-type */ 

 int main(void)
 {
	 // Entry point function. 
	 
	 /* Data declaration */
	 
	 short passenger_age;				/* passenger_age is an identifier of type short of 2 bytes. */ 
	 short is_frequent_flyer;			/* is_frequent_flyer is an identifier of type short of 2 bytes. */
	 short travelling_off_peak_season;		/* travelling_off_peak_season is an identifier of type short of 2 bytes. */ 

	 printf("Enter the age of passenfer: ");
	 scanf("%hd", &passenger_age); 

	 printf("Is the passenger a freuquent flyer ?:(1 or 0) for yes or no:  ");
	 scanf("%hd", &is_frequent_flyer);
	  
	 printf("Is the passenger travelling off the peak season ?: (1 or 0) for yes or no: "); 
	 scanf("%hd", &travelling_off_peak_season);
	
	 airline_discount(passenger_age, is_frequent_flyer, travelling_off_peak_season); 

	 return 0; 

 } 

 /**
  * 	Function definition 
  *
  * function_identifier	:- airline_discount
  * function_parameters	:- short, short, short
  * function_return_type:- void
  *
  */ 

  void airline_discount(short age, short freq_flyer, short off_season)
  {
	  if(age <= 0 ) {
		  printf("Please enter valid age:"); 
	  }
	  else if(age >= 60 || freq_flyer == 1 || off_season == 1) {
		  printf("Passenger can get discount!"); 
	  } else {
		  printf("Passenger can not get discount!"); 
	  }	   
  }

