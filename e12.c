//C program to calculate Gross-Salary of a employee.
#include <stdio.h>
int main()
{
    char name[30];
    float basic,hra,da,pf,gross;

    printf("Enter name: ");
    gets (name);

    printf("Enter Basic Salary: ");
    scanf("%f",&basic);

    printf("Enter HRA: ");
    scanf("%f", &hra);

    printf("Enter DA: ");
    scanf("%f", &da);

    /*pf automatic Calculated 12% */
    pf=(basic *12)/100;

    gross= basic+hra+da+pf;

    printf("\nName: %c\nBasic: %f\nHRA: %f\nDA: %f\nPF: %f\n***GROSS  SALARY : %f***", name,basic,hra,da,pf,gross);
    return 0;
}