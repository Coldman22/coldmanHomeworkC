//C program to demonstrate example of global and local scope.
#include <stdio.h>
int a=10;
void fun(void);
int main()
{
    int a=20;
    int b=30;

    printf("Inmain() a=%d, b=%d",a,b);
    fun();
    printf("Inmain() after calling fun()~b=%d\n",b);
    return 0;
}
void fun(void)
{
    int b=40;
    printf("Infun() a=%d\n",a);
    printf("Infun() b=%d\n",b);
}