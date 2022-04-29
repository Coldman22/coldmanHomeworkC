//C program to demonstrate example of floor() nd ceil() fun
#include <stdio.h>
#include <math.h>
int main()
{
    float val;
    float fVal,cVal;

    printf("Enter the floating number : ");
    scanf("%f", &val);

    fVal=floor(val);
    cVal=ceil(val);

    printf("floor value : %f\nceil value : %f\n",fVal,cVal);
    return 0;
}