#include<stdio.h>
int main()
{
    int age;
    printf("\n Enter Age (0-120) := ");
    scanf("%d",&age);
    if(age<=12 && age>=0)
    {
        printf("\n Free Entry ");
    }
    else if(age>=12 && age<60)
    {
        printf("\n Entry ticket price is 100 Rs.");
    }
    else if(age>=60 && age<=120)
    {
        printf("\n Free Entry ");
    }
    else
    {
        printf("\n Entered age is Invalid");
    }
    return 0;
}
