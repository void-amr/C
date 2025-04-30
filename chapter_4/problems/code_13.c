/**
 *  @Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 *  @Date   :-  30/4/25
 */

 // Header Files 
 #include <stdio.h> 
  
 int main(void)
 {
    // Entry point function. 

    int a, b; 
    float x,y; 

    scanf("%3d %3d %3f %8e", &a, &b, &x, &y);
    printf("%d %d %f %e",a, b, x, y); 

    return 0; 
 }