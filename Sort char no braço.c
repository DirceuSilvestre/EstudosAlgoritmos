#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

#define S 100

void sort_char(char *v)
{
    char c, menor;
    int d=0, t;
    t = strlen(v);
    while (d<t)
    {
        menor='z';
        for (int i = d; v[i] != '\0'; ++i)
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
    char a[S];
    printf("As letras que o vetor vai guardar\n");
    scanf("%s", a);
    sort_char(a);
    printf("Vetor ordenado\n");
    printf("%s\n", a);
    return 0;
}
