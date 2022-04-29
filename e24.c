//C-Read formatted time once through scanf in c language.
#include <stdio.h>
int main()
{
    int hour,minute,second;
    printf("enter time(in HH:MM:SS)");
    scanf("%02d:%02d:%02d",&hour,&minute,&second);
    printf("entered time in %02d:%02d:%02d" ,hour,minute,second);
    return 0;
}