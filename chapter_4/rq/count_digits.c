/**
 *  @Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 *  @Date   :- 3/5/25 
 */

 // Header Files
 #include <stdio.h> 

 int main(void)
 {
    // Entry point function.

    int number; 
    int count = 0; 
    
    printf("Enter number -> "); 
    scanf("%d", &number);

    while(number > 0) {

        int lastDigit = number % 10; 
        count ++; 
        number = number / 10; 
    }
    printf("Count of digits : %d", count); 

    return 0; 
 }