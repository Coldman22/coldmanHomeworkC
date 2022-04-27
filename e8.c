//Check whether it is EVEN or ODD
#include <stdio.h>
int main()
{
    int num;

    printf("Enter the integer number: ");
    scanf("%d", &num);

    /*If the number is divisble by 2 then it is even otherwise it is odd*/
    if(num%2==0)
        printf("%d is EVEN", num);
    else
        printf("%d is ODD", num);
    return 0;
}