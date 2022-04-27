//C program to read marks and print percentage and divison.
#include <stdio.h>
int main()
{
    int science;
    int maths;
    int english;
    int total;
    float per;

    science= 99;
    maths=21;
    english=34;

    //calculate the total
    total= science+maths+english;

    //calculate the percentage
    per = (float)(total)*100/300;

    printf("The total marks are %d\n", total);
    printf("The Percentage is %f\n", per);

    //check the division
    if(per>=60)
    {
        printf("First Divsion\n");
    }
    else if(per>=50)
    {
        printf("Second Division\n");
    }
    else if(per>=40)
    {
        printf("third division\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}