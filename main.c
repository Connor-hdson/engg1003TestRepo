#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    float y;
    printf("Enter a number: ");
    // %f reads the input as a floating point and scanf("%f", &x) stores that value in x
    scanf("%f", &x);
    // performs required calculation
    y =  (x + 2) / (x - 1);
    // prints the results of the above calculation
    printf("y: %f\n", y);

    return 0;
}
