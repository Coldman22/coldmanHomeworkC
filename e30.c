//Calculate Employee and Employer provident fund using c program.
#include <stdio.h>
#define EMPLOYEE_PERCENTAGE 12.5f
#define EMPLOYER_PERCENTAGE 12.0f
int main()
{

    float basicPay;
    float employeefund, employerfund;

    printf("enter basic pay: ");
    scanf("%f", &basicPay);

    employeefund=(basicPay/100)*EMPLOYEE_PERCENTAGE;
    employerfund=(basicPay/100)*EMPLOYER_PERCENTAGE;

    printf("Basic Pay: %f\n", basicPay);
    printf("Employee contribution: %f\n",employeefund);
    printf("Employer contribution: %f\n",employerfund);
    return 0;
}