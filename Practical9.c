#include<stdio.h>
int main()
{
    float a,d,F;
    printf("\n Enter the Amount := ");
    scanf("%f",&a);
    if(a>0)
    {
        if(a<1000)
        {
            printf("\n No Discount will be given \n");
        }
        else if(a>=1000 && a<=5000)
        {
            printf("\n 10%% Discount will be given \n");
            printf("\n Total Amount := %f \n",a);
            d=a*(0.1);
            printf("\n Discount Price := %f \n",d);
            F=a-d;
            printf("\n Amount to be Paid := %f \n",F);
        }
        else if(a>5000)
        {
            printf("\n 20%% Discount will be given \n");
            printf("\n Total Amount := %f \n",a);
            d=a*(0.2);
            printf("\n Discount Price := %f \n",d);
            F=a-d;
            printf("\n Amount to be Paid := %f \n",F);
        }
        else
        {
            printf("\n Invalid \n");
        }
    }
    else
    {
        printf("\n Invalid Amount \n");
    }
    return 0;
}
