#include<stdio.h>
int main()
{
    float marks;
    printf("\n Enter Marks(0-100):= ");
    scanf("%f",&marks);
    if(marks>=0 && marks<=100)
    {
        (marks>=90)?printf("\n A Grade \n"):(marks>=80 && marks<90)?printf("\n B Grade \n"):(marks>=70 && marks<80)?printf("\n C Grade \n"):(marks>=60 && marks<70)?printf("\n D Grade \n"):printf("\n E Grade \n");
    }
    else
    {
        printf("\n Enter Valid Marks \n");
    }
    return 0;
}
