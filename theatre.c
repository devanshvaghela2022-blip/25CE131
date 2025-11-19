#include<stdio.h>
int main()
{
    int i,j,rs,r,c;
    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2");
    char arr[5][10];
    for(i=0;i<5;i++)
    {
        printf("Row %d : ",i+1);
        for(j=0;j<10;j++)
        {
            printf("O ");
            arr[i][j] = 'O';
        }
        printf("\n");
    }
    printf("\n\t      Screen \n");
    printf("\t___________________ \n");
    printf("\n Welcome to ticket booking application");
    printf("\n There are 5 rows and 10 seats per row");
    printf("\n Enter the no. of tickets wanted to book := ");
    scanf("%d",&rs);
    for(i=1;i<=rs;i++)
    {
        printf("\n Enter the seat no. %d (e.g. 2 5) := ",i);
        scanf("%d %d",&r,&c);
        if(r>0 && r<=5 && c>0 && c<=10)
        {
            arr[r-1][c-1] = 'X';
        }
        else
        {
            printf("\n Enter valid row and column no.");
            i--;
        }
    }
    for(i=0;i<5;i++)
    {
        printf("Row %d : ",i+1);
        for(j=0;j<10;j++)
        {
            printf("%c ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

