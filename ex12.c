#include <stdio.h>
#include <stdlib.h>

void ordena (int *p)
{
    int temp;
    for (int *i = p; i<(p+2); i++)
    {
        if (*i>*(i+1)) 
        {
            
        }

    }
}

int main()
{
    int n[3];
    for (int i=0; i<3; i++)
    {
        printf("Insere o %d numero:", i);
        scanf("%d", &n[i]);
    }
    ordena (n);
    printf("%d; %d; %d:", n[0],n[1], n[2]);
    getchar();
    return 0;

}