#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,nextn,i;
    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2");
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

