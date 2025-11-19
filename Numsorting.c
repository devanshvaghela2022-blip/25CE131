#include<stdio.h>
int main()
{
    int ar[25],p=0,e=0,n=0,o=0,i,num;
    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2");
    printf("\n Enter the size of array := ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("\n Enter the integer [%d] := ",i);
        scanf("%d",&ar[i]);
    }
    for(i=0;i<num;i++)
    {
        if(ar[i]>=0)
        {
            p++;
        }
        else
        {
            n++;
        }
        if(ar[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    printf("\n Total no. of positive no. := %d",p);
    printf("\n Total no. of negative no. := %d",n);
    printf("\n Total no. of even no. := %d",e);
    printf("\n Total no. of odd no. := %d",o);
    return 0;
}

