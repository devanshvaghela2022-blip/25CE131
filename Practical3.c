#include<stdio.h>
int main()
{
    float w,h,B;
    printf("\n Enter your weight(in kg) := ");
    scanf("%f",&w);
    printf("\n Enter your height(in m) := ");
    scanf("%f",&h);
    B=w/(h*h);
    printf("\n BMI Value = %.2f ",B);
    if(B<=18.5)
    {
        printf("\n Underweight ");
    }
    else if(B>18.5 && B<=24.9)
    {
        printf("\n Normal ");
    }
    else if(B>25 && B<=29.9)
    {
        printf("\n Overweight ");
    }
    else if(B>30)
    {
        printf("\n Obesity ");
    }
    else
    {
        printf("\n Invalid ");
    }
    return 0;
}
