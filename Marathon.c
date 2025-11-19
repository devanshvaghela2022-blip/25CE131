#include<stdio.h>
#include<unistd.h>
int main()
{
    int i,min=0;
    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2");
    for(i=1; i<=50; i++)
    {
        printf("\n Minute %d : Distance Covered := %.1f km",i,0.5*i);
        sleep(1);
        if(i==20)
        {
            printf("\n Marathon Completed");
            break;
        }
    }
    return 0;
}


