#include<stdio.h>
#include<string.h>

struct team
{
    char name[20];
    char sport[20];
    struct coach
    {
        char cname[20];
        int age;
        int exp;
    } ch;
};

int main()
{
    int n=0, i, duplicate, x;
    int age1, exp1;
    int flag;
    char search_name[20], search_sport[20];
    char tname[20], tsport[20], cname[20];
    struct team t[100];

    do
    {
        printf("\n---------Sports Team Entry---------");
        printf("\n1. Add a new team");
        printf("\n2. Search for a team");
        printf("\n3. Display all teams");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &x);

        switch(x)
        {
        case 1:
            duplicate = 0;
            printf("Enter team name: ");
            scanf("%s", tname);

            printf("Enter sport type: ");
            scanf("%s", tsport);

            printf("Enter coach name: ");
            scanf("%s", cname);

            printf("Enter coach age: ");
            scanf("%d", &age1);

            printf("Enter coach years of experience: ");
            scanf("%d", &exp1);

            strcpy(t[n].name, tname);
            strcpy(t[n].sport, tsport);
            strcpy(t[n].ch.cname, cname);
            t[n].ch.age = age1;
            t[n].ch.exp = exp1;
            n++;
            printf("Team added successfully!\n");
            break;

        case 2:
            flag = 0;
            printf("Search by team name: ");
            scanf("%s", search_name);
            printf("Search by sport type: ");
            scanf("%s", search_sport);

            for(i = 0; i < n; i++)
            {
                if(strcmp(t[i].name, search_name) == 0 && strcmp(t[i].sport, search_sport) == 0)
                {
                    printf("\nTeam found \n");
                    printf("\n Team name: %s", t[i].name);
                    printf("\n Sport type: %s", t[i].sport);
                    printf("\n Coach name: %s", t[i].ch.cname);
                    printf("\n Coach age: %d", t[i].ch.age);
                    printf("\n Coach experience: %d\n", t[i].ch.exp);
                    flag = 1;
                    break;
                }
            }
            if(flag==0)
            {
                printf("\nTeam not found\n");
            }
            break;

        case 3:
            for(i = 0; i < n; i++)
            {
                printf("\n--- All Stored Teams ---\n");
                printf("\n Team name: %s", t[i].name);
                printf("\n Sport type: %s", t[i].sport);
                printf("\n Coach's name: %s", t[i].ch.cname);
                printf("\n Coach's age: %d", t[i].ch.age);
                printf("\n Coach's years of experience: %d \n", t[i].ch.exp);
            }
            if(n == 0) printf("\n No teams stored yet");
            break;

        case 4:
            return 0;

        default:
            printf("\nInvalid choice");
            break;
        }
    }
    while(1);

    return 0;
}
