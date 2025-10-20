#include<stdio.h>
int main()
{
    float a,b,c;
    float multiply(float,float);
    printf("Enter 2 Nos:");
    scanf("%f %f",&a,&b);
    c = add(a,b);
    printf("%f x %f = %f",&a,&b,&c);
    return 0;

}
float multiply(float x , float y)
{
    float z = x * y;
    return z;

}
