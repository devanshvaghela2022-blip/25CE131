#include<stdio.h>
int main()
{
    int n,i,j,flag=0;
    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2");
    printf("\n Enter the no. of items :- ");
    scanf("%d",&n);
    if(n>0)
    {
        float arr[n];
        float *inventory,*inventory1,temp=0;
        inventory=arr;
        for(i=0; i<n; i++)
        {
            printf("\n Enter the price of %d item :- ",i+1);
            if(scanf("%f",inventory)!=1)
            {
                flag=1;
                fflush(stdin);
            }
            inventory++;
        }
        if(flag==1)
        {
            printf("\n Invalid Input. Items can't be sorted.");
            return 1;
        }
        for(i=0; i<n; i++)
        {
            inventory=&arr[i];
            for(j=i+1; j<n; j++)
            {
                inventory1=&arr[j];
                if(*inventory > *inventory1)
                {
                    *inventory=*inventory1;
                    temp=*inventory;
                    *inventory1=temp;
                }
            }
            for(i=0; i<n; i++)
            {
                printf("\n Sorted item prices :- %f",*inventory);
                inventory++;
            }
        }
    }
    if(n==0)
    {
        printf("\n No items to be sorted.");
    }
    return 0;
}

