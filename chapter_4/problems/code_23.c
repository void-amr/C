/**
 *  @Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 *  @Date   :- 4/5/25 
 */

 // Header Files 
 #include <stdio.h> 

 int main(void)
 {
    // Entry point function. 
    int i = 12345, j = 0xabcd9, k = 077777; 

    printf("%d %x %o\n", i, j, k); 
    printf("%3d %3x %3o\n", i, j, k); 
    printf("%8d %8x %8o\n", i, j, k); 
    printf("%-8d %-8x %-o\n", i , j, k);
    printf("%+8d %+8x %+8o\n", i, j, k); 
    printf("%08d %#8x %#8o\n", i, j, k); 

    return 0; 
 }