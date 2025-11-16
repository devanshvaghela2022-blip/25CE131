#include<stdio.h>
#include<math.h>
int a,b,c;
int *p1,*p2,*p3,*p5;
float *p4;

int sidelength();
int check();
float area();
void displayarea(float area);

int main()
{
    int flag=0;
    float triangle_area=0.0f;
    p5=&flag;

    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2");

    sidelength();
    check();
    triangle_area=area();
    displayarea(triangle_area);
    return 0;
}
int sidelength()
{
    p1=&a;
    p2=&b;
    p3=&c;

    printf("\n Enter the length of first side :- ");
    scanf("%d",p1);
    printf("\n Enter the length of second side :- ");
    scanf("%d",p2);
    printf("\n Enter the length of third side :- ");
    scanf("%d",p3);
    return 0;
}
int check()
{
    if(*p1>0 && *p2>0 && *p3>0)
    {
        if (*p1+*p2>*p3 && *p2+*p3>*p1 && *p1+*p3>*p2)
        {
            *p5=1;
            printf("\n Valid Triangle : Yes");
        }
        else
        {
            *p5=0;
            printf("\n Valid Triangle : No");
            printf("\n Message :- The given length does not form a valid triangle");
        }
    }
    else
    {
        printf("\n Sidelengths must be positive values only");
    }
    return 0;
}
float area()
{
    float s,area;
    p4=&area;
    if(*p5==1)
    {
        s=((*p1+*p2+*p3)/2.0f);
        area=sqrt(s*(s - *p1)*(s - *p2)*(s - *p3));
        return area;
    }
    else
    {
        return 0.0f;
    }
}
void displayarea(float area)
{
    if(*p5==1)
    {
        printf("\n Area := %f",*p4);
    }
}
