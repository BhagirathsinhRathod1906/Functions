#include<stdio.h>
int main()
{
    float a,b,c;
    float comp(float *a,float *b,float *c);
    printf("\nEnter 3 Values:");
    scanf("%f %f %f",&a,&b,&c);
    comp(&a,&b,&c);
    return 0;
}
float comp(float *x,float *y,float *z)
{
    if(*x>*y && *x>*z)
    {
        printf("Largest value = %f",*x);

    }
    else if(*y>*x && *y>*z)
    {
        printf("Largest value = %f",*y);

    }
    else if(*z>*y && *z>*x)
    {
        printf("Largest value = %f",*z);

    }
}
