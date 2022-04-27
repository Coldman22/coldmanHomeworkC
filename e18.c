//c program to find area and perimeter
#include <stdio.h>
#define PI 3.14f
int main()
{
    float rad, area, per;

    printf("Enter the radius of circle: ");
    scanf("%f", &rad);

    area=PI*rad*rad;
    per=2*PI*rad;

    printf("Area of circle is %f\nPerimeter is %f\n", area, per);
    return 0;
}