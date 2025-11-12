#include <stdio.h>
#include <stdlib.h>

void printdobro (int * a)
{
    for (int * i =a; i< a+5;i++)
    {
        *i = *i * 2;
    }
}

int main ()
{
    int a[5];
    for (int i= 0; i<5; i++)
    {
        printf ("Insere o %d numero:", i+1);
        scanf("%d", &a[i]);
    }
    printdobro(a);

    for (int i= 0; i<5; i++)
    {
        printf ("Dobro do %d numero: %d \n", i+1, a[i]);
        
    }
    getchar();
    return 0;
}