// Calculate simple Interest.
/*
formula: SI=(P*R*T)/100
*/
#include <stdio.h>
int main()
{
    float amount, rate, time , si;

    printf("Enter the principal amount: ");
    scanf("%f", &amount);

    printf("enter the rate: ");
    scanf("%f", &rate);

    printf("enter the time: ");
    scanf("%f", &time);

    si=(amount*rate*time)/100;

    printf("The simple interest is %f\n", si);
    return 0;
}