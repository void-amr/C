/**
 * 	@Author	:- Aryan Mahesh Ranjane	<ranjanearyan82@gmail.com> 
 * 	@Date	:- 21/4/25 
 */
 
 // Header Files 
 // Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char item[5]; 
    for(int le = 0; le < 6; le ++) {
        item[le] = getchar(); 
    }
    for(int le = 0; le < 6; le ++) {
        putchar(item[le]);
    }
    return 0;
}
