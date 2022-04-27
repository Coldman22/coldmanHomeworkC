// C program to find a cube of and integer number using two different methods.
/*
(a) without the pow() function.
(b) with the pow() function.
*/
//Method a : without pow() func

#include <stdio.h>
int main()
{
    int a, cube;

    printf("Enter the integer number: ");
    scanf("%d", &a);

    //Calculating the cube without pow()
    cube=(a*a*a);
    printf("Cube is %d\n", cube);
    return 0;
}

//Method (b): Calculating cube with pow() function.
#include <stdio.h>
#include <math.h>
int main()
{
    int a, cube;

    printf("Enter the integer number: ");
    scanf("%d", &a);

    //calculating the cube with pow() function
    cube = pow(a,3);
    printf("Cube is %d\n", cube);
    return 0;
}