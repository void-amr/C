/**
 *  @Author :- Aryan Mahesh Ranjane <ranjanearyan82@gmail.com> 
 *  @Date   :- 22/5/25
 *  Area of circle
 */

 // Header Files
 #include <stdio.h> 
 
 // defining the constant 
 #define PI 3.14159

 int main(void)
 {
    // Entry point function.

    float area = 0.0f, radius = 0.0f; 
    
    printf("Enter the value of radius = "); 
    scanf("%f", &radius); 

    /*Calculating area of circle
    
        Radius -> line that connects edge to the center of the circle
                  this line is of same length (l) from every edge of circle to center.
        Diameter -> 2 radius's ie -> 2 edge connected together 
        
        R1---------c--------R2

        Area -> PI * r*r --> 
        PI -> Total length of circle from outter part and it's ratio with diameter
        r*r -> is basically diameter

        So we multiply the ratio of circle -> Circumference:Diameter -> which is universal for all circle -> 3.14159
        with diameter -> twice the radius 
    */

    // applying formula. 
    area = PI * radius * radius;
    
    // Printing the output. 
    printf("Area of circle = %f", area);
    return 0;
 }

