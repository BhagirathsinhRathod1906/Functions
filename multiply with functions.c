#include <stdio.h>


int main() {
    float a, b, c;
    float multiply(float, float);


    printf("Enter 2 numbers: ");
    scanf("%f %f", &a, &b);

    c = multiply(a, b);

    printf("%f x %f = %f\n", a, b, c);

    return 0;
}


float multiply(float x, float y)
{
    return x * y;
}
