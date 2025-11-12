#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1= 5;
    float b2=6.6;
    char c3= 'f';
    int * a = &a1;
    float * b = &b2;
    char * c = &c3;
    printf("a1: %d ; b2: %f ; c3: %c \n",a1,b2,c3);
    *a = 10;
    *b = 11;
    *c = 'a';
    printf("a1: %d ; b2: %f ; c3: %c ",a1,b2,c3);
    getchar();
    return 0;
}