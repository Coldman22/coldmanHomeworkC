//Printing value in Decimal, Octal, Hexadecimal using printf inc
#include <stdio.h>
int main()
{
    int value = 4567;
    printf("Decimal value :%d\n", value);
    printf("Octal value :%o\n", value);
    printf("Hexadecimal value (small letter):%x\n", value);
    printf("Hexadecimal value (large letter):%X\n", value);
    return 0;
}