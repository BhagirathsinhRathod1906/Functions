#include<stdio.h>
int main()
{
    float p,c,m,avg;
    float result(float *avg);
    printf("Enter marks of 3 subjects:");
    scanf("%f %f %f",&p,&c,&m);
    float sum = p + c + m;
    avg = sum/3;
    printf("Average of Marks = %f",avg);
    result(&avg);
    return 0;

}
float result (float *x)
{
    if (*x>=70)
    {
        printf("\nYour Grade is distinction");

    }
     if (*x>=60 && *x<70)
    {
        printf("\nYour Grade is First class");

    }
     if (*x>=50 && *x<60)
    {
        printf("\nYour Grade is Second class");

    }
     if (*x>=35 && *x<50)
    {
        printf("\nYour Grade is Third class");

    }
     if (*x<35)
    {
        printf("\n You are Fail in this exam");

    }
}
