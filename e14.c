//C program to calculate X^N (X to the power of N) using pow function
#include <stdio.h>
#include <math.h>
int main()
{
    int x,n;
    int result;

    printf("Enter the base: ");
    scanf("%d",&x);

    printf("Enter the power: ");
    scanf("%d",&n);

    result=pow((double)x,n);
    printf("the result is %d", result);
    return 0;
}