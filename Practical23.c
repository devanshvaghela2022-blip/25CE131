#include<stdio.h>
int main()
{
    int a,temp;
    printf("Enter the no. of days := ");
    scanf("%d",&a);
    int arr[a],maxp=0,profit=0,i,j;
    for(i=0; i<a; i++)
    {
        printf("\n Enter the price on %d day := ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<a-1; i++)
    {
        if(arr[i]<arr[i+1])
        {
            profit=arr[i+1]-arr[i];
            if(profit>maxp)
            {
                maxp=profit;
            }
        }
    }
    for(i=0; i<a-1; i++)
    {
        for(j=i+1; j<a; j++)
        {
            if(arr[i]>arr[j])
            {
                arr[i]=arr[j];
                temp=arr[i];
                arr[j]=temp;
            }
        }
    }
    printf("\n Minimum price is :- %d",arr[0]);
    printf("\n Max Profit := %d",maxp);
    return 0;
}
