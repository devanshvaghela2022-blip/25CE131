#include<stdio.h>
#include<unistd.h>
int main()
{
    int i,s;
    while(1)
    {
        printf("\n Enter the no. of seconds := ");
        printf("\n Enter 0 to exit := ");
        scanf("%d",&s);
        if(s>0)
        {
            for(i=s; i>=0; i--)
            {
                printf("\n %d",i);
                sleep(1);
                if(i==0)
                {
                    printf("\n Countdown Completed");
                }
            }
        }
        else if (s==0)
        {
            break;
        }
        else
        {
            printf("\n Enter seconds in positive integer");
        }
    }
    return 0;
}
