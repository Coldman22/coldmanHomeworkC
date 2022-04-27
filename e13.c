//Convert temperture from Fahrenheit to Celisus and from Celisus  Fahrenheit.
#include <stdio.h>
int main()
{
    float fh,cl;
    int choice;

    printf("\n1 Convert from fahrenheit to celisus:");
    printf("\n2 Convert from celisus to fahrenheit:");
    printf("\n Enter your choice(1,2): ");
    scanf("%d", &choice);

    if(choice==1)
    {
        printf("\nEnter the temperature in fahreheit: ");
        scanf("%f", &fh);
        cl=(fh-32)/1.8;
        printf("The temperature in celisus is %2f", cl);
    }
    else if(choice==2)
    {
        printf("\nEnterthe temperature in celisus: ");
        scanf("%f", &cl);
        fh=(cl*1.8)+32;
        printf("\nThe temperature in fahrenheit is %2f", fh);
    }
    else
    {
        printf("\nInvalid Choice !!!");
    }
    return 0;
}