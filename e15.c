//C program to find the difference of two number
#include <stdio.h>
int main()
{
    int a,b;
    int diff;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the second number: ");
    scanf("%d", &b);

    if(a>b)
    {
        diff=a-b;
    }
    else
    {
        diff=b-a;
    }
    printf("\nDifference is %d", diff);
    return 0 ;
}