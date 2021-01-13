#include <stdio.h> 
#include <stdlib.h>

int fatorial(int v)
{
    if (v<2)
    {
        return 1;
    }
    else
    {
        return (v*fatorial(v-1));
    }
}

int main(int argc, char const *argv[])
{
    int a, b;
    scanf("%d", &a);
    b = fatorial(a);
    printf("%d\n", b);
    return 0;
}
