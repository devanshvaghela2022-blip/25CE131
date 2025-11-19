#include<stdio.h>
int main()
{
    int m=21,p,c;
    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2");
    do
    {
        printf("\n Enter the no. of matchsticks to be picked(1 ,2 ,3 or 4 only) := ");
        scanf("%d",&p);
        if(p>0 && p<5)
        {
            printf(" You have picked %d matchsticks. \n",p);
            m=m-p;
            printf("\n Now computer's turn");
            c=5-p;
            printf("\n Computer had picked %d matchsticks. \n",c);
            m=m-c;
            if(m==1)
            {
                printf("\n You had picked the last matchstick.Hence you lost the Game. \n");
                break;
            }
        }
        else
        {
            printf("\n Enter valid no. of matchsticks.");
        }
    }
    while(1);
}

