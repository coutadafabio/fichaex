#include <stdio.h>
#include <stdlib.h>

void enderecopares (int * n)
{
    for (int * i = n; i<n+5; i++)
    {
        if (*i % 2 ==0)
        {
            printf("Endereco posicao numero par %d: %p\n", *i,i);
        }

    }
}

int main()
{
    int n[5];
    for (int i = 0; i<5; i++)
    {
        printf("Insere o %d numero: ", i+1);
        scanf("%d", &n[i]);
    }
    enderecopares(&n);
    getchar();
    return 0;
}