#include<stdio.h>
int main()
{
    int i,j,a,b;
    printf("\n Enter the size of table vertically := ");
    scanf("%d",&a);
    printf("\n Enter the size of table horizontally := ");
    scanf("%d",&b);
    printf("\n Multiplication Table ( %d * %d ) : \n",a,b);
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=b;j++)
        {
            printf("%3d ",i*j);
        }
        printf("\n");
    }
    return 0;
}
