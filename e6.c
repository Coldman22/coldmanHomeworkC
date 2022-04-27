//C program to find the quotient and remainder 
#include <stdio.h>
int main()
{
    int dividend, divisor;
    int quotient, remainder;

    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    quotient=dividend/divisor;
    remainder=dividend%divisor;

    printf("Quotient is %d and remainder is %d\n", quotient, remainder);
    return 0;
}