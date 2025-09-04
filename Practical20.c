#include<stdio.h>
int main()
{
    int i,n,asum=0,esum,missing;
    printf("\n Enter the size of array := ");
    scanf("%d",&n);
    int arr[n-1];
    for(i=0;i<n-1;i++)
    {
        printf("\n Enter the Id arr[%d] := ",i);
        scanf("%d",&arr[i]);
        asum=asum+arr[i];
    }
    esum = n * (n+1)/2;
    missing = esum-asum;
    printf("\n The Missing Id := %d ",missing);
    return 0;
}
