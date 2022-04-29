//C program to multiply two number using plus operator.
#include <stdio.h>
int main()
{
    int a,b;
    int mul, loop;

    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    mul=0;

    for(loop=1;loop<=b;loop++)
    {
        mul+=a;
    }
    printf("Multiplication of %d and %d is %d",a,b,mul);
    return 0;
}