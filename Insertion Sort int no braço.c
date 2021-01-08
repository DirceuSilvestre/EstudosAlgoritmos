#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main( )
{
    int i, j, num, parada=1, tam=0, a[10]={3, 2, 4, 1, 6, 5};
    for (i = 1; a[i] != '\0'; ++i)
    {
        tam++;
        for (j = i; j > -1; --j)
        {
            num = a[j];
            if (num<a[j-1])
            {
                a[j] = a[j-1];
                a[j-1] = num;
            }
        }
    }
    while (parada>0)
    {
        scanf("%d", &parada);
        if (parada>0)
        {    
            tam++;
            a[tam]=parada;
            for (j = tam; j > -1; --j)
            {
                num = a[j];
                if (num<a[j-1])
                {
                    a[j] = a[j-1];
                    a[j-1] = num;
                }
            }
        }
    }
    for (i = 0; i < tam+1; ++i)
    {
        if (i==tam)
        {
            printf("%d \n", a[i]);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}

