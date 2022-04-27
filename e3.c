//C Program to find sum and average of two numbers.
#include <stdio.h>
int main()
{
    int a, b, sum;
    float avg;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    sum=a+b;
    avg=(float)(a+b)/2;

    printf("The sum is %d\n", sum);
    printf("Average is %f\n", avg);
    return 0;
}