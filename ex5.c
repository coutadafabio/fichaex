#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define T 30

void troca (int * a1, int * a2)
{
    int temp = 0;
    if (*a2 > *a1)
    {
        temp = *a1;
        *a1 = *a2;
        *a2 = temp;
    }
}

int main()
{
    char a[T];
    char b[T];
    int flag = 0;
    int flag1 = 0;
    int a1 = 0;
    int b1 = 0;
    do
    {
        printf("Insira o primeiro nº: ");
        fgets(a,T,stdin);
        a[strcspn(a,"\n")]='\0';
        for (size_t i=0; i<strlen(a);i++)
        {
            if(isdigit(a[i])==0)
            {
                flag=0;
            }else
            {
                flag = 1;
            }
        }
        if (flag==0)
        {
            printf("Erro!\n");
        }
        
    }while (flag ==0);
    do
    {
        printf("Insira o segundo nº: ");
        fgets(b,T,stdin);
        b[strcspn(b,"\n")]='\0';
        for (size_t i=0; i<strlen(b);i++)
        {
            if(isdigit(b[i])==0)
            {
                flag1=0;
            }else
            {
                flag1 = 1;
            }
        }
        if (flag1==0)
        {
            printf("Erro!\n");
        }
    }while (flag1 ==0);
    a1 = atoi(a);
    b1 = atoi(b);
    printf("Primeira varivael:%d ; Segunda variavel : %d \n", a1, b1);   
    troca (&a1,&b1);
    printf("Primeira varivael com maior valor depois da troca:%d ; Segunda variavel com menor valor depois da troca: %d \n", a1, b1);  
    getchar ();
    return 0;
}