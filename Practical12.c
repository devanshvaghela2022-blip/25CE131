#include<stdio.h>
int main()
{
    int i;
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
