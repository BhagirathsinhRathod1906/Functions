#include<stdio.h>
int main()
{
    float a,b;
    float comp(float *x,float*y);
    printf("Enter 2 Numbers:");
    scanf("%f %f",&a,&b);
    comp(&a,&b);
    printf("\nYour Largest value = %f",a);
    printf("\nYour smallest value = %f",b);
    return 0;

}
float comp(float *x,float *y)
{
    if(*x<*y)
    {
        float temp = *x;
        *x = *y;
        *y = temp;
    }


}
