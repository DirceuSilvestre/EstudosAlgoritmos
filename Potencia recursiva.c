#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
            
int potencia(int z, int d)
{
    if (d<1)
    {
        return 1;
    }
    else
    {
        return (z*potencia(z, d-1)); 
    }
}

int main( )
{
    int x, p, r;
    scanf("%d", &x);
    scanf("%d", &p);
    r = potencia(x, p);
    printf("%d\n", r);
    return 0;
}
