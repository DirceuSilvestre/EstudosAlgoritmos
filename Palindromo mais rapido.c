#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
            
int main(int argc, char const *argv[])
{
    int i, j, c=0;
    char matriz[10];
    scanf("%s", matriz);
    j=strlen(matriz)-1;
    for (i = 0; i < (strlen(matriz)/2); ++i)
    {
        printf("%d\n", i);
        if (matriz[i]!=matriz[j])
        {
            printf("não é palindromo\n");
            c=1;
            break;
        }
        --j;
    }
    if (c==0)
    {
        printf("é palindromo\n");
    }  
    return 0;
}
