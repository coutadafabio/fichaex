#include <stdio.h>
#include <stdlib.h>

int somadobro (int * a, int * b)
{
    *a = *a * 2;
    *b = *b * 2;
    return *a + *b;
}

int main()
{
    int a = 0;
    int b = 0;
    printf ("Insira o primeiro numero:");
    scanf("%d", &a);
    printf("Insira o segundo numero:");
    scanf("%d",&b);
    printf ("Soma do dobro das duas variáveis: %d \n", somadobro (&a,&b));
    printf ("Dobro de a: %d ; Dobro de b: %d \n",a,b);
    
    getchar ();
    return 0;
}