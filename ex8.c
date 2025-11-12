#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[10]= {1.,2,3,4,5,6,7,8,9,10};
    for (float * i = a; i< (a + 10); i++)
    {
        printf("%p\n",i);
    }
}