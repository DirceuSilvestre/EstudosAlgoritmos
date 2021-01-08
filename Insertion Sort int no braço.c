#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main( )
{
    int i, j, parada=1, d=0, tam=-1, num, a[10] = {3, 4, 2, 6, 5, 1};
    for (i = 0; a[i] != '\0'; ++i)
    {
        tam++;
    }
    while (parada>0)
    {
        scanf("%d", &parada);
        if (parada>0)
        {    
            tam++;
            a[tam]=parada;
        }
    }
    while (d<tam)
    {
        for (j = tam; j > -1; --j)
        {
        
            if (a[j]<a[j-1])
            {   
                num = a[j];
                a[j] = a[j-1];
                a[j-1]=num;
            }        
        }
        d++;
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
