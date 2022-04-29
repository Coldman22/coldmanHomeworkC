//C program to convert feets to inches.
#include <stdio.h>
int main()
{
    int feet, inches;
    printf("enter the value in feet: ");
    scanf("%d", &feet);
    //converting feet intoo inches
    inches= feet*12;
    printf("The conversion in inches are %d\n", inches);
    return 0;
}