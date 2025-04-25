/**
 *  @Author :- Aryan Mahesh Ranjane    
 *  @Date   :- 26/4/25
 */

 // Header Files 
 #include <stdio.h> 

 int main(void)
 {
    // Entry point function. 

    int unsigned i, j; 
    long ix; 
    short s; 
    unsigned u; 
    float x; 
    double dx;
    char c; 

    printf("Enter the values for decimals ");
    scanf("%4d%4d%4d%4d",&i, &j, &ix, &u);
    printf("%d %d %d %d \n", i, j, ix, u);   /* This prints garbage values or 0 for the reason being -> Undefined behaviour*/

    printf("Enter the values for floating points ");
    scanf("%8f %10f", &x, &dx);
    printf("%8.1f %f", x, dx);
 }
