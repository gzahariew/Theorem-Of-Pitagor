#include <stdio.h>
#include <math.h>

int main() {
    
    double a;
    double b;
    double c;

    printf("What is a?\n");
    scanf("%lf", &a);
    
    printf("What is b?\n");
    scanf("%lf", &b);
    
    // Calculate c after getting input for a and b
    c = sqrt(a * a + b * b);

    // Print the result
    printf("The hypotenuse (c) is: %lf\n", c);
    
    return 0;
}
