//C Program to find area of rectangle
#include <stdio.h>
int main()
{
    float l,b,area;

    printf("The length is : ");
    scanf("%f",&l);
    printf("The breadth is: ");
    scanf("%f",&b);

    area=l*b;
    printf("Area is %f", area);
    return 0;
}