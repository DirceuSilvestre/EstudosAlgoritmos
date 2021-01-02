#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int S;

void sort_char(char *v)
{
    char c, menor;
    int d=0;
    while (d<S)
    {
        menor='z';
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
    char a[S];
    printf("As letras que o vetor vai guardar\n");
    scanf("%s", a);
    sort_char(a);
    printf("Vetor ordenado\n");
    printf("%s\n", a);
    return 0;
}
