#include<stdio.h>
int main()
{
    float a;
    float div(float *a);
    printf("\nEnter a Number:");
    scanf("%f",&a);
    div(&a);
    return 0;

}
float div(float *x)
{
    float reminder = fmod(*x,7.00);
        if(fabs(reminder) == 0.000000)
    {
        printf("\Given Number is divisible by 7");

    }
    else
    {
        printf("\Given Number is not divisible by 7");

    }

}
