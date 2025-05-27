#include <stdio.h>


int main(int argc, char const *argv[])
{
    int numeros[10], soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Insira um numero inteiro: ");
        scanf("%d", &numeros[i]);
        soma += numeros[i];
        
    }

    printf("A soma dos numeros inteiros inseridos eh: %d", soma);
    return 0;
}
