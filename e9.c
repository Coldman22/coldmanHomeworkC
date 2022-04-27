//C program to find largest number among three number.
#include <stdio.h>
int main()
{
    int a,b,c; 
    int largest;

    printf("Enter the three integers numbers: ");
    scanf("%d%d%d", &a,&b,&c);

    if(a>b && a>c)
        largest=a;
    else if(b>a && b>c)
        largest=b;
    else
        largest=c;
    printf("The largest number is %d\n", largest);
    return 0;
}