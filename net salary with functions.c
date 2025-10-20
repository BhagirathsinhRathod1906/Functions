#include<stdio.h>
int main()
{
    float allowance,gross_salary,deductions,net_salary;
    float net(float *allowance,float *gross_salary,float *deductions);
    printf("Enter gross_Salary:");
    scanf("%f",&gross_salary);
    net(&allowance,&gross_salary,&deductions);
    net_salary = gross_salary + allowance - deductions;
    printf("Your Net salary is = %f",net_salary);
    return 0;

}
float net(float *a,float *g,float *d)
{
 if(*g>10000)
 {
     *a = 0.1 * (*g);
     *d = 0.03 * (*g);

 }
 else if(*g>5000 && *g<10000)
 {
     *a = 0.07 * (*g);
     *d = 0.02 * (*g);

 }
}
