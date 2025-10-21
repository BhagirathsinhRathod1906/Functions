#include<stdio.h>
int main()
{
    float net_sales,gross_sales,discount;
    float net(float *gross_sales,float *discount);
    printf("\nEnter the value of Gross sales:");
    scanf("%f",&gross_sales);
    net(&gross_sales,&discount);
    net_sales = gross_sales - discount;
    printf("Your net sales is %f",net_sales);
    return 0;
}
float net(float *g,float *d)
{

    if(*g>20000)
    {
        *d = (*g) * 15/100;
    }
    else if(*g>10000 && *g<20000)
    {
        *d = (*g) * 10/100;
        }
        else
        {
            *d = (*g) * 5/100;

        }
}
