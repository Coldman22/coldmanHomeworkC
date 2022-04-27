//C program to find subtraction of two integer number.
#include <stdio.h>
int main()
{
    int a, b, sub;

    //Read the value of a
    printf("Enter the first number: ");
    scanf("%d", &a);

    //Read the value of b
    printf("Enter the second number: ");
    scanf("%d", &b);

    sub=a-b;
    printf("Subtraction is %d", sub);
    return 0;
}