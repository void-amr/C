/**
 *  @Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 *  @Date   :- 1/5/25
 */

 // Header Files
 #include <stdio.h> 

 int main(void)
 {
    // Entry point function.

    float x, y, z; 

    scanf("%e %e %e", &x, &y, &z);

    printf("%8.4e %8.4e %8.4e",x, y, z);
    printf("%12.4e %12.4e", sqrt(x), abs(x));

    return 0;
 }