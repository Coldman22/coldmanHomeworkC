//c program to define, modify and access aglobal varibale.
#include <stdio.h>
//declaration with initilization
int x=100;
//function to modify value of global variable
void modify_x(int val)
{
    x=val;
}
int main()
{
    printf("1) Value of x: %d\n",x);
    //modifying value of a
    x=200;
    printf("2) Value of x: %d\n",x);
    //modifying value from function
    modify_x(300);
    printf("3) Value of x: %d\n",x);
    return 0;
}