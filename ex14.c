#include <stdio.h>
#include <stdlib.h>
#define T 10

void preenche (int *ptr1, int * ptr2)
{
    for (int *i = ptr1; i<(ptr1+T); i++)
    {
        *i = *ptr2;
    }
}

int main()
{
    int a[T]={1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,};
    int n = 15;
    for (int d =  0; d<T; d++)
    {
        printf("%d\n",a[d]);
    }
    preenche(a, &n);
    for (int c =  0; c<T; c++)
    {
        printf("%d\n",a[c]);
    }
    getchar();
    return 0;
}