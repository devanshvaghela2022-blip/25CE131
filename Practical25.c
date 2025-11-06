#include<stdio.h>
void displaybooks();
int getTotalBooks();
int borrowbook(int);
int calculatefine(int);
int B1=0,B2=0,B3=0;
int main()
{
    int ch,total,n,f,fine,flag,r;
    char x;
    do
    {
        printf("\n Option 0 : Exit");
        printf("\n Option 1 : Display the Books");
        printf("\n Option 2 : Total no. of  Books");
        printf("\n Option 3 : Borrow a Book");
        printf("\n Option 4 : Return a book");
        printf("\n Option 5 : Overdue book");
        printf("\n Enter your option :- ");
        scanf("%d",&ch);
        if(ch>0 && ch<5)
        {
            switch(ch)
            {
            case 1:
                displaybooks();
                break;
            case 2:
                total = getTotalBooks();
                printf("\n Total no. of Books :- %d \n",total);
                break;
            case 3:
                borrowbook(n);
                break;
            case 4:
                printf("Enter the book no. to return :- ");
                scanf("%d",&r);
                if(r==1)
                {
                    B1=0;
                }
                if(r==2)
                {
                    B2=0;
                }
                if(r==3)
                {
                    B3=0;
                }
                break;
            case 5:
                printf("\n Enter the no. of days overdue :- \n");
                scanf("%d",&f);
                fine=calculatefine(f);
                printf("\n Fine := %d",fine);
                break;
            default:
                printf("\n Invalid Choice \n");
                break;
            }
        }
        if(ch==0)
        {
            break;
        }
    }
    while(1);
    return 0;
}

void displaybooks()
{
    printf("\n 1. Atomic Habits");
    printf("\n 2. The 48 Laws of Power");
    printf("\n 3. The psychology of Money \n");
}

int getTotalBooks()
{
    int flag;
    flag=3;
    return flag;
}

int borrowbook(int n)
{
    printf("\n Enter the no. of book to borrow :- ");
    scanf("%d",&n);
    if(n==1 && B1==0)
    {
        printf("\n Atomic Habits book is borrowed. \n");
        B1=1;
    }
    else if(n==2 && B2==0)
    {
        printf("\n The 48 Laws of Power book is borrowed. \n");
        B2=1;
    }
    else if(n==3 && B3==0)
    {
        printf("\n The psychology of Money book is borrowed. \n");
        B3=1;
    }
    else
    {
        printf("Invalid choice or Book is not available.\n");
    }
}
int calculatefine(int f)
{
    int fine;
    fine=f*5;
    return fine;
}
