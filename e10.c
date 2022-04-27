//C program to check whether a person is eligible for voting or not?
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the age of voter: ");
    scanf("%d",&a);

    if(a>=18)
    {
        printf("Eligible for voting");
    }
    else
    {
        printf("Not eligible for voting");
    }
    return 0;
}