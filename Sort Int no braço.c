#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int S;

void sort_int(int *v)
{
    int c, d=0, menor;
    while (d<S)
    {
        menor=9999;
        for (int i = d; i < S; ++i)
        {
            if (menor>v[i])
            {
                menor=v[i];
                c = v[d];
                v[d]=menor;
                v[i]=c; 
            }
        }
        d++;
    }
}
     
int main(int argc, char const *argv[])
{
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &S);
    int a[S];
    printf("Os numeros que o vetor vai guardar\n");
    for (int i = 0; i < S; ++i)
    {
        scanf("%d", &a[i]);
    }
    sort_int(a);
    printf("Vetor ordenado\n");
    for (int i = 0; i < S; ++i)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}
