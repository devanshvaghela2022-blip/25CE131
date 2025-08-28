#include<stdio.h>
int main()
{
    int age;
    printf("\n Enter age := ");
    scanf("%d",&age);
    if(age>0)
    {
        if(age>18)
        {
            printf("\n Eligible for Opening Savings Account");
        }
        else
        {
            printf("\n Not Eligible for Opening Savings Account");
        }
    }
    else
    {
        printf("\n Invalid Age");
    }
    return 0;
}
