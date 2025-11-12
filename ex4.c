#include <stdio.h>
#include <stdlib.h>

void troca (int *a, int*b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}

int main ()
{
    int a = 10;
    int b= 5;
    printf("a: %d , b: %d \n", a,b);
    troca(&a,&b);
    printf("a: %d , b: %d ", a,b);
    getchar ();
    return 0;
}