/**
 *  @Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 *  @Date   :- 4/5/25 
 */

 // Header Files
 #include <stdio.h> 

 int main(void)
 {
    // Entry point function.

    char c1 = 'A', c2 = 'B', c6 = '\n', c3 = 'C', c4 = 'D', c5 = 65;
    
   // printf("%s \n %s \n %s\n", &c1, &c2, &c3); 
    printf("%c%c%c\n", c1, c2, c3); 
    printf("%3c %3c %3c\n", c1, c2, c3); 
    printf("%3c%3c%3c\n",c1,c2,c3); 
    printf("c1 = %c c2= %c c3 = %c", c1, c2, c3); 
    
    return 0; 
 }