#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define T 30

int verifica (char * a, char * b)
{
    int flag = 0;
    for (char * i = a; i< a+strlen(a); i++)
    {
        if (*b==*i)
        {
            for (char * i = a; i< a+strlen(b); i++)
            {
                if (*b=*i)
                {
                    flag = 1;
                    b++;
                }else{
                    flag = 0;
                    break;
                }
            }
        }
        else
        {
            flag = 0;
        }
    }
    if (flag==0)
    {
        return 0;
    }else{
        return 1;
    }
}

int main()
{
    char a[T];
    char b[T];
    char * a1 =a;
    char * b1 = b;
    printf("Insere a primeira string: ");
    fgets(a,T,stdin);
    a[strcspn(a,"\n")]='\0';
    printf("Insere a segunda string: ");
    fgets(b,T,stdin);
    b[strcspn(b,"\n")]='\0';
    printf("%d", verifica (a1,b1));

}