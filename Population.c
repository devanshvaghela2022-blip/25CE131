#include<stdio.h>
int main()
{
    double tp=1441981744,tw,tm,tlp,tlm,tlw,tilm,tilw;
    printf("\n Name :- Devansh Vaghela");
    printf("\n Id no. :- 25CE131");
    printf("\n Batch & Division :- C2");
    printf("\n Total population of Bharat := %lf ",tp);
    tw=tp*(0.484);
    printf("\n Total population of Women in Bharat := %lf ",tw);
    tm=tp-tw;
    printf("\n Total population of Men in Bharat := %lf ",tm);
    tlp=tp*(0.8595);
    printf("\n Total Literate population in Bharat := %lf ",tlp);
    tlm=tm*(0.8095);
    printf("\n Total Literate population of Men in Bharat := %lf ",tlm);
    tlw=tw*(0.6284);
    printf("\n Total Literate population of Women in Bharat := %lf ",tlw);
    tilm=tm-tlm;
    printf("\n Total Illiterate population of Men in Bharat := %lf ",tilm);
    tilw=tw-tlw;
    printf("\n Total Illiterate population of Women in Bharat := %lf ",tilw);
    return 0;
}

