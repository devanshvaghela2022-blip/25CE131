#include <stdio.h>
#include <string.h>

void reverseWord(char *word) {
    int len = 0;
    while (word[len] != '\0') {
        len++;
    }
    int i, j;
    char temp;
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
}

int main() {
    FILE *fp;
    char word[100];

    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2\n");

    fp = fopen("Demo.txt", "r");

    if (fp == NULL) {
        printf("Error: Demo.txt not found. Please create the file.\n");
        return 1;
    }

    printf("Reversed words:\n");
    while (fscanf(fp, "%s", word) != EOF) {
        reverseWord(word);
        printf("%s ", word);
    }
    printf("\n");

    fclose(fp);
    return 0;
}
