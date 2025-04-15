#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tamanho, star;

    printf("Insira o tamanho da meia arvore: ");
    scanf("%d", &tamanho);

    for (int i = 0; i <= tamanho; i++)
    {
        for ( star = 1; star <= i  ; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}
