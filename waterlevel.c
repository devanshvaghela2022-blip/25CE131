#include<stdio.h>
int main()
{
    int i=0;
    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2");
    while(i<=20)
    {
        printf("\n Current water level := %d Liters ",i*10);
        if(i==10)
        {
            printf("\n Tank is Full ");
            break;
        }
        i++;
    }
    return 0;
}

