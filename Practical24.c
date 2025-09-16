#include<stdio.h>
int main()
{
    int len=0,i,j;
    char notes[50],rev[50];
    printf("\n Enter the notes := ");
    gets(notes);
    //Length of string
    for(i=0; notes[i]!='\0'; i++)
    {
        len++;
    }
    printf("\n Length of String is := %d",len);
    //Reverse of the string
    printf("\n Reversed String := ");
    for(i=len,j=0; i>=0; i--,j++)
    {
        rev[j]=notes[i];
        printf("%c",rev[j]);
    }
    //Comparison of the string
    char cmp[50];
    int result=0;
    printf("\n Enter the second String :=");
    gets(cmp);
    i=0;
    while(notes[i]!='\0' && cmp[i]!='\0')
    {
        if(notes[i]!=cmp[i])
        {
            result = notes[i]-cmp[i];
            break;
        }
        i++;
    }
        if(result == 0)
        {
            result= notes[i]-cmp[i];
        }
        if(result==0)
        {
            printf("\n Strings are equal");
        }
        else if(result>0)
        {
            printf("\n First String is greater than the second string");
        }
        else
        {
            printf("\n First String is smaller than the second string");
        }
    return 0;
}
