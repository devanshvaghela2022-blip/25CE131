#include<stdio.h>
int main()
{
    int ch,total=0;
    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2");
    do
    {
        printf("\n -------- Menu -------- \n");
        printf("\n 1. Burger ----------------- Rs.150 ");
        printf("\n 2. Pizza ------------------ Rs.200 ");
        printf("\n 3. Pasta ------------------ Rs.120 ");
        printf("\n 4. Sandwich --------------- Rs.100 ");
        printf("\n 5. French Fries ----------- Rs.80 ");
        printf("\n Enter 0 when you have completed your order ");
        printf("\n Enter your order no. := ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            total=total+150;
            printf("\n Burger is added to your order. Subtotal := %d \n",total);
            break;

            case 2:
            total=total+200;
            printf("\n Pizza is added to your order. Subtotal := %d \n",total);
            break;

            case 3:
            total=total+120;
            printf("\n Pasta is added to your order. Subtotal := %d \n",total);
            break;

            case 4:
            total=total+100;
            printf("\n Sandwich is added to your order. Subtotal := %d \n",total);
            break;

            case 5:
            total=total+80;
            printf("\n French Fries is added to your order. Subtotal := %d \n",total);
            break;

            case 0:
            printf("\n Order Completed \n");
            printf("\n Your total Bill := %d \n",total);
            return 0;

            default:
            printf("\n Invalid No. Please Enter a valid choice \n");
            break;
        }
    }while(1);
    return 0;
}

