#include<stdio.h>
int main()
{
    int l,b,a,p;
    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2");
    printf("\n Enter Length of yard := ");
    scanf("%d",&l);
    printf("\n Enter Breadth of yard := ");
    scanf("%d",&b);
    a=l*b;
    printf("\n Area of Yard := %d m^2",a);
    p=2*(l+b);
    printf("\n Perimeter of Yard := %d m",p);
    return 0;
}

