#include <stdio.h>

int main() {
    FILE *fp;
    int mark, count, i;

    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2\n");

    fp = fopen("marks.dat", "wb");

    if (fp == NULL)
    {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter the number of students: ");
    scanf("%d", &count);

    printf("Enter marks for %d students:\n", count);
    for (i = 0; i < count; i++)
    {
        printf("Mark %d: ", i + 1);
        scanf("%d", &mark);
        putw(mark, fp);
    }

    fclose(fp);
    printf("\nMarks stored successfully.\n");

    fp = fopen("marks.dat", "rb");

    if (fp == NULL)
    {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\nRetrieved marks:\n");
    while (1)
    {
        mark = getw(fp);
        if (feof(fp)) {
            break;
        }
        printf("%d\n", mark);
    }

    fclose(fp);
    return 0;
}
