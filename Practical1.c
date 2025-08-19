#include<stdio.h>
#include<limits.h>
#include<float.h>
#include<stddef.h>      //For size_t and ptrdiff_t
#include<stdint.h>
int main()
{
    printf("\n ----- Data Type Sizes and Ranges ----- \n \n");

    //CHAR
    printf("\n char : ");
    printf("\n Size :- %zu bytes ",sizeof(char));
    printf("\n Range :- %d to %d \n \n",CHAR_MIN,CHAR_MAX);

    //UNSIGNED CHAR
    printf("\n unsigned char : ");
    printf("\n Size :- %zu bytes ",sizeof(unsigned char));
    printf("\n Range :- 0 to %d \n \n",UCHAR_MAX);

    //INT
    printf("\n int : ");
    printf("\n Size :- %zu bytes ",sizeof(int));
    printf("\n Range :- %d to %d \n \n",INT_MIN,INT_MAX);

    //UNSIGNED INT
    printf("\n unsigned int : ");
    printf("\n Size :- %zu bytes ",sizeof(unsigned int));
    printf("\n Range :- 0 to %u \n \n",UINT_MAX);

    //LONG
    printf("\n long : ");
    printf("\n Size :- %zu bytes ",sizeof(long));
    printf("\n Range :- %ld to %ld \n \n",LONG_MIN,LONG_MAX);


    //UNSIGNED LONG
    printf("\n unsigned long : ");
    printf("\n Size :- %zu bytes ",sizeof(unsigned long));
    printf("\n Range :- 0 to %lu \n \n",ULONG_MAX);


    //FLOAT
    printf("\n float : ");
    printf("\n Size :- %zu bytes ",sizeof(float));
    printf("\n Range :- %.10e to %.10e \n \n",FLT_MIN,FLT_MAX);


    //DOUBLE
    printf("\n double : ");
    printf("\n Size :- %zu bytes ",sizeof(double));
    printf("\n Range :- %.10e to %.10e \n \n",DBL_MIN,DBL_MAX);

    //LONG DOUBLE
    printf("\n long double : ");
    printf("\n Size :- %zu bytes ",sizeof(long double));
    printf("\n Range :- %.10e to %.10e \n \n",LDBL_MIN,LDBL_MAX);

    //SIZE_T
    printf("\n size_t : ");
    printf("\n Size :- %zu bytes ",sizeof(size_t));
    printf("\n Max Value :- %zu \n \n",(size_t)- 1);

    //PTRDIFF_T
    printf("\n ptrdiff_t : ");
    printf("\n Size :- %zu bytes ",sizeof(ptrdiff_t));
    printf("\n Range :- %td to %td \n \n",PTRDIFF_MIN,PTRDIFF_MAX);

    return 0;
}
