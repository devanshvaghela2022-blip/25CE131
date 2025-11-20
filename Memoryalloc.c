#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int initial_size = 100;
    char *summary = (char*)calloc(initial_size, sizeof(char));
    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2\n");
    if (summary == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter a short article summary (up to 99 characters): ");
    fgets(summary, initial_size, stdin);

    printf("\nYour summary: %s\n", summary);

    int new_size;
    printf("Enter new size for the updated summary: ");
    scanf("%d", &new_size);
    getchar();

    char *temp = (char*)realloc(summary, new_size * sizeof(char));
    if (temp == NULL)
    {
        printf("Memory reallocation failed!\n");
        free(summary);
        return 1;
    }
    summary = temp;

    printf("Enter the updated (longer) summary (up to %d characters): ", new_size - 1);
    fgets(summary, new_size, stdin);

    printf("\nUpdated summary: %s\n", summary);

    free(summary);

    return 0;
}


