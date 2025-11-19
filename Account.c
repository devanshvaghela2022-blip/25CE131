#include<stdio.h>
int main()
{
    int amount=5000,withdraw,ch;
    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2");
    printf("\n Starting Balance is Rs.5000");

    while(1)
    {
        printf("\n Enter 1 for Withdrawing money \n Enter 2 for Exit := ");
        scanf("%d",&ch);
        switch(ch)
        {
         case 1:
             printf("\n Enter amount to withdraw := ");
             scanf("%d",&withdraw);
             if(withdraw<=amount)
             {
                 amount=amount-withdraw;
                 printf("\n Remaining Balance := %d",amount);
             }
             else
             {
                 printf("\n Insufficient balance");
             }
             break;
         case 2:
             return 1;
             break;
         default:
             printf("\n Invalid Choice");
             break;
        }
    }
    return 0;
}

