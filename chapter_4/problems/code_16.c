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

    int i, j, k; 

    scanf("%d %d %d", &i, &j, &k);
    printf("%d %d %d", i, j, k);
    printf("\n%05d %05d", (i+j), (i - k));
    printf("\n%9f %7d",sqrt(i + j), fabs(i - k));

    return 0;
 }