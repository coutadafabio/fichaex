#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[3][3];
    for (int i = 0; i<3; i++)
    {
        for (int c = 0; c<3; c++)
        {
            printf ("Insere um numero:");
            scanf("%f", &a[i][c]);
        }
    }
    printf("     1          2         3");

    for (int i = 0; i<3; i++)
    {
        printf("\n");
        printf("%d ", i+1);
        for (int c = 0; c<3; c++)
        {
            
            printf (" %f ;",a[i][c]);
        }
        
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("            1                   2                  3");

    for (int i = 0; i<3; i++)
    {
        printf("\n");
        printf("%d ", i+1);
        for (int c = 0; c<3; c++)
        {
            
            printf (" %p ;",&a[i][c]);
        }
        
    }


    printf("\n");
    getchar();
    return 0;
}