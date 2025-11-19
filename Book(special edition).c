#include<stdio.h>
int main()
{
    int i;
    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2");
    for(i=1; i<=50; i++)
    {
        printf("\n Book ID := %d ",i);
        if(i%5==0)
        {
            printf("\n Book ID := %d (Special Edition)",i);
        }
    }
    return 0;
}

