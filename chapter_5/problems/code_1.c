/**
 *  @Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 *  @Date   :- 20/5/25 
*/

 // Header Files
 #include <stdio.h> 
 #include <math.h>

 int main(void)
 {
    // Entry point function. 
        
    // Declaring data and initializing them to 0.0 to avoid any random garbage value. 
    float principal_amount = 0.0, compounded_amount = 0.0, compound_interest = 0.0, interest_rate = 0;
    int number_of_years = 0, iterations = 0; 

    // Reading the principal and interest rate; 
    printf("Enter the principal amount: ");
    scanf("%f", &principal_amount);

    printf("Enter the interest rate: "); 
    scanf("%3f", &interest_rate); 
    
    printf("Enter for how many years you want to put your money? \n");
    scanf("%d", &number_of_years); 
    
    /**
     *      To calculate compound interest we need to follow a formula called 
     *      compound interest formula which goes like.
     * 
     *      c = p * (1 + ir) ^ n
     *      
     *      here, 
     *      c -> compounded amount
     *      p -> principal amount 
     *      ir -> interest rate in decimal not in percentage 
     *      ^ -> exponention operation 
     *      n -> for how many years you want to keep your money 
     * 
     *      So here we multiply our prinicpal amount p by ir and add 1 init and raise the interest rate to, 
     *      number of years. 
     *      we multiply our interest rate number of years time again and again. 
     */
     
     // converting our percentage value into decimal -> numerical value so that we can work on it. 
     float percentage_to_decimal = 1 + (interest_rate / 100); 
     printf("%f\n", percentage_to_decimal); 

     // This value will multiply the number consitently ie when taking exponent, we will multiply this value again and again. 
     const float __ptd_cons = percentage_to_decimal;
     
     for(int le = 1; le < number_of_years; le++) {
      // same as  pow(1.060000, number_of_years
      percentage_to_decimal = percentage_to_decimal * __ptd_cons;
     }

     compounded_amount = principal_amount * percentage_to_decimal;        

     printf("Compounded amount after %d years is : %f", number_of_years, compounded_amount);
     
     return 0;
}
 