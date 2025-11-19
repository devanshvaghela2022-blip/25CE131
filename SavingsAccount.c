#include<stdio.h>
int main()
{
    int age;
    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2");
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

