// C program to calculate HCF(highest commoon factor)of the number
#include <stdio.h>
//function to find HCF of two number
int findHCF (int a, int b)
{
    int temp;
    if(a==0 || b==0)
    return 0;
    while (b!=0)
    {
        temp= a%b;

        a = b;

        b = temp;
    }
    return a;
}
int main()
{
    int a,b; 
    int hcf;

    printf("Enter the first number: ");
    scanf("%d",&a);

    printf("Enter the second number: ");
    scanf("%d",&b);

    hcf= findHCF(a,b);
    printf("HCF(Highest common factor) is %d\n", hcf);
    return 0;
}