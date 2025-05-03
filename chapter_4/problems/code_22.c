/**
 *  @Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com>
 *  @Date   :- 3/5/25 
 */

 // Header Files
 #include <stdio.h> 

 int main(void)
 {
    // Entry point function.

    // Data declaration. 
    int i, j;
    long lx;
    unsigned u;
    char c; 
    double dx; 
    float x; 

    printf("Enter integere values please ! \n"); 
    scanf("%d %d %d %d %d", &i, &j, &lx, &u, &c);

    printf("\nEnter floating point values please ! \n");
    scanf("%lf %f", &dx, &x); 

    printf("1st\n");
    
    printf("Printing minumum field width of integers: %04d %04d %04d %04d \n", i, j, lx, c);
    printf("Printing minimum field width of float with decimal places: %-14.8e %-14.8e \n", dx, x);

    printf("2nd\n"); 
    printf("Printing minimum field width of integers: %#5d %#5d %#5d %#5d \n", i , lx, j, u); 
    printf("Printing minimum field width floating : %#10.5f %#10.5lf\n", x, dx);

    printf("3rd\n");
    printf("Printing minimum field width of floating point numbers: %-010f %-010lf", x, dx);
    return 0;
 }