#include<stdio.h>
int main()
{
    float C,F;
    printf("\n Enter value of temperature in degree celsius := ");
    scanf("%f",&C);
    F=(C*9/5)+32;
    printf("\n Temperature in Farhenheit := %f ",F);
    return 0;
}
