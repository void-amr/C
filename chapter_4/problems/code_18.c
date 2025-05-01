/**
 *  @Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com>
 *  @Date   :- 1/5/25
 */

 // Header Files 
 #include <stdio.h> 
 #include <math.h> 
 #include <stdlib.h> 

 int main(void)
 {
    // Entry point function. 

    float x, y, z; 

    scanf("%e %e %e", &x, &y, &z);
    printf("%6e %6e %6e\n", x, y, z); 
    printf("\t%e %e", sqrt(x + y), fabs(z)); 
 }