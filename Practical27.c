#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,nextn,i;
    printf("\n Enter the no. of months :- ");
    scanf("%d",&n);
    printf("Month :-                  ");
    for(i=1;i<=n;i++)
    {
        printf("%d ",i);
    }
    printf("\nSavings amount(in Rs.) :- ");
    for(i=1;i<=n;i++)
    {
        nextn=n1+n2;
        n1=n2;
        n2=nextn;
        printf("%d ",nextn);
    }
    return 0;
}
