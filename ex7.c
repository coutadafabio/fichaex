#include <stdio.h>
#include <stdlib.h>

void soma (int* a, int *b)
{
    *a = *a + *b;
}

int main()
{
    int a = 0;
    int b = 0;
    printf("Insere o primeiro numero:");
    scanf("%d", &a);
    printf("Insere o segundo numero:");
    scanf("%d", &b);
    printf ("Primeiro numero: %d ; Segundo numero: %d \n", a, b);
    printf ("Depois da execucao da funcao\n");
    soma (&a,&b);
    printf ("Primeiro varivael (soma) %d ; Segundo numero: %d \n", a, b);
    
    getchar ();
    return 0;
}